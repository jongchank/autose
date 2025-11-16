#!/usr/bin/env python3
import sys
import os
import base64
from urllib.parse import urlparse
from urllib.request import urlopen
from ollama import chat
from ollama import ChatResponse

def is_url(string):
    """Check if the string is a valid URL."""
    try:
        result = urlparse(string)
        return all([result.scheme, result.netloc])
    except:
        return False

def get_image_data(image_input):
    """Get image data as base64 string from URL or file path."""
    if is_url(image_input):
        # Download image from URL and convert to base64
        from urllib.request import Request
        # Add headers to avoid 403 errors from some websites
        req = Request(image_input, headers={'User-Agent': 'Mozilla/5.0'})
        with urlopen(req) as response:
            image_bytes = response.read()
            return base64.b64encode(image_bytes).decode('utf-8')
    else:
        # For local files, read and convert to base64
        if not os.path.exists(image_input):
            raise FileNotFoundError(f"Image file '{image_input}' not found.")
        with open(image_input, 'rb') as image_file:
            image_bytes = image_file.read()
            return base64.b64encode(image_bytes).decode('utf-8')

def main():
    # Check if image file path or URL is provided
    if len(sys.argv) < 2:
        print("Usage: python describe_image.py <image_file_or_url>")
        sys.exit(1)

    image_input = sys.argv[1]

    try:
        # Get image data as base64
        image_data = get_image_data(image_input)

        # Call ollama with qwen3-vl:8b model
        response: ChatResponse = chat(
            model='qwen3-vl:8b',
            messages=[
                {
                    'role': 'user',
                    'content': '이 이미지를 간략하게 설명해줘.',
                    'images': [image_data]  # Pass base64 encoded image
                }
            ]
        )

        # Print the description
        print(response.message.content)

    except FileNotFoundError:
        print(f"Error: Image file '{image_input}' not found.")
        sys.exit(1)
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()

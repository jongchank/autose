import sys
from ollama import chat
from ollama import ChatResponse

model = 'qwen3-vl:8b'
messages = [
    { "role": "system", "content": "You are a helpful assistant." },
    { "role": "user", "content": sys.argv[1] }
]

response: ChatResponse = chat(model=model, messages = messages) 
print(response.message.content)

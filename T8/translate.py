import sys
from ollama import chat
from ollama import ChatResponse

model = 'qwen3-vl:8b'
messages = [
    { "role": "system", "content": "You are a helpful assistant." },
    { "role": "user", "content": "다음 중국어를 한국어로 번역해줘:" + sys.argv[1] }
]

response: ChatResponse = chat(model=model, messages = messages) 
print(response.message.content)

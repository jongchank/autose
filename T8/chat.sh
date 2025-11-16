#!/bin/sh
curl http://localhost:11434/api/chat -d '{
  "model": "exaone-deep:7.8b",
  "stream": false,
  "messages": [
    { "role": "system", "content": "You are a helpful assistant." },
    { "role": "user", "content": "너는 어디서 태어났어?" }
  ]
}'

#    { "role": "assistant", "content": "저는 LG AI Research에서 개발된 EXAONE입니다. 제 출생지는 한국입니다." },
#    { "role": "user", "content": "북한?" }
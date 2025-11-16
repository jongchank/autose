#!/bin/sh
curl http://localhost:11434/api/generate -d '{
  "model": "exaone-deep:7.8b",
  "prompt": "자동차를 주제로 시를 지어줘.",
  "stream": false
}'

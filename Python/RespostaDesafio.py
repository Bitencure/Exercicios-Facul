import requests

payload = {'euquero' : 'Sim'}

r = requests.post("https://8d3255hby1.execute-api.sa-east-1.amazonaws.com/prod/desafio", json= payload)

print(r.text)
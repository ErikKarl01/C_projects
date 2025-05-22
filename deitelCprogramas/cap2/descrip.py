from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad

# Exemplo de descriptografia AES
chave = b'chave_de_16_bytes'
dados_encriptados = b'\xd0...\x8e'  # Substituir pelo texto cifrado real
iv = b'16_bytes_inicializ'          # Vetor de inicialização

cipher = AES.new(chave, AES.MODE_CBC, iv)
dados_descriptografados = unpad(cipher.decrypt(dados_encriptados), AES.block_size)
print(dados_descriptografados.decode('utf-8'))
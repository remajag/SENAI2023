# Linux Comandos Básicos

* pwd <br>
  O comando pwd mostra o caminho atual, onde você está.
  sintaxe: $ pwd <enter>

* cd <br>
  O comando cd serve para se navegar entre a estrutura de diretórios (pastas) no Linux. Essa estrutura é definida por um caminho a partir do diretório raiz (/).
  sintaxe: $ cd /caminho
  Exemplos de caminhos:
  /var/tmp
  /tmp/log
  /usr/sbin
  . (diretório atual)
  .. (diretório anterior)
  ~ (diretório home do usuário atual)
  
* mkdir <br>
  O comando mkdir serve para se criar um diretório (pasta)
  sintaxe: $ mkdir dir1
  Outros exemplos e variações:
  $ mkdir /tmp/log
  $ mkdir /var/tmp/log
  Observação: A opção -p serve para criar toda uma estrutura de pastas novas de uma única vez:
  exemplo:
  $ mkdir -p /home/lucas/docs/cpf
  $ mkdir -p /documentos/faturas/consorcio/pagas

* ls <br>
  O comando ls server para se listar o conteúdo de um diretório, como arquivos e subdiretórios, suas permissões e características como o dono (owner), o tamanho (size) etc.
  sintaxe: $ ls <enter>
  Outros exemplos e variações:
  $ ls -l /
  $ ls -ltr .
  $ ls -R /tmp
  $ ls -la

   

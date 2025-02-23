# SIMD Translator 

# Установка проекта на Ubuntu

## Шаг 1: Установите зависимости

Для работы с проектом необходимо установить несколько зависимостей. Откройте терминал и выполните следующие команды:

```
sudo apt update
sudo apt install -y openjdk-17-jdk cmake wget unzip 
```

## Шаг 2: Скачать ANTLR4 Runtime для C++

Создайте директорию, куда будете распаковывать runtime (например, ~/antlr4) и перейдите в неё. Выполните следующие команды:

```
cd ~/antlr4
wget https://www.antlr.org/download/antlr4-cpp-runtime-4.13.2-source.zip
unzip antlr4-cpp-runtime-4.13.2-source.zip
mkdir build && cd build
cmake ..
make -j$(nproc)
sudo make install
```

## Шаг 3: Клонируйте репозиторий

Клонируйте репозиторий проекта с GitHub. Перейдите в директорию, куда Вы хотите склонировать проект и выполните следующие команды:

```
git clone https://github.com/KonstantinMikhel/simd-translator.git
cd simd-translator
```

## Шаг 4: Соберите и запустите проект

Запустите скрипт run.sh из директории проекта:
```
./run.sh
```

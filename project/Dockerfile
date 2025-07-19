# Сборка ---------------------------------------

# В качестве базового образа для сборки используем gcc:latest
FROM gcc:latest AS build

# Установим рабочую директорию
WORKDIR /app

# Установим необходимые пакеты для сборки
RUN apt-get update && \
    apt-get install -y \
      libboost-dev \
      libboost-program-options-dev \
      cmake \
      make \
      g++

# Скопируем исходный код
ADD ./src /app/src

# Установим рабочую директорию для сборки проекта
WORKDIR /app/build

# Выполним сборку нашего проекта
RUN cmake ../src && \
    cmake --build .

# Запуск ---------------------------------------

# В качестве базового образа используем ubuntu:latest
FROM ubuntu:latest

# Добавим пользователя
RUN groupadd -r sample && useradd -r -g sample sample
USER sample

WORKDIR /app

# Скопируем собранное приложение
COPY --from=build /app/build/hello_world_app .

# Установим точку входа
ENTRYPOINT ["./hello_world_app"]
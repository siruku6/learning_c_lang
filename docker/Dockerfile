FROM debian:bullseye-slim
WORKDIR /app

RUN apt-get update && apt-get install -y \
  git \
  gcc \
  g++ \
  gdb \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/*

CMD /bin/sh -c "echo '準備完了' && sleep infinity"

# C言語開発環境をDocker+VS Codeで構築する
# https://qiita.com/suzuki_sh/items/c78627936d46f0108b10

# C/C++
# https://becre8ive.tech/dev/how-to-develop-clang-on-docker/

# C++
# https://zenn.dev/kiraemon/articles/df3c9aedfc3c13

# Visual Studio CodeでC/C++プログラミング
# 実行/デバッグも
# https://qiita.com/whim0321/items/ce7c1d8d203a21778a83

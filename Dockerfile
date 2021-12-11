FROM silkeh/clang:latest

# Install system dependencies
RUN apt-get update && apt-get -y --no-install-recommends install \
    build-essential

# Clear cache
RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

CMD bash
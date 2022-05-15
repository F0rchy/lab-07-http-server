// Copyright 2022 Artem Artemov <theartemka6@mail.ru>

#ifndef INCLUDE_EXAMPLE_HPP_
#define INCLUDE_EXAMPLE_HPP_

#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/config.hpp>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <nlohmann/json.hpp>
#include <shared_mutex>
#include <stdexcept>
#include <string>
#include <thread>
using json = nlohmann::json;
namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = boost::asio::ip::tcp;

auto example() -> void;

void go_useful_server(int argc, char* argv[]);

#endif  // INCLUDE_EXAMPLE_HPP_

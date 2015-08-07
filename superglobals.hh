<?hh 

function get_params(): array {
  return $_GET;
}

function env_vars(): array {
  return $_ENV;
    }

function get_cookies(): array {
  return $_COOKIE;
}

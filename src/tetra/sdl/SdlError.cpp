#include "SdlError.hpp"

using tetra::SdlError;

SdlError::SdlError(const std::string& msg) : std::runtime_error{msg} {}

void SdlError::throwIfFound()
{
  const char* err = SDL_GetError();
  if (*err) {
    auto error = SdlError{err};
    SDL_ClearError();
    throw error;
  }
}

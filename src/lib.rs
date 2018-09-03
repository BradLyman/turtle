extern crate gl;
extern crate sdl2;

pub mod app_failure;
mod gl_app;
mod gl_debug;

pub use gl_app::drive_gl_app;
pub use gl_app::GlApp;
pub use gl_debug::gl_debug_to_stdout;

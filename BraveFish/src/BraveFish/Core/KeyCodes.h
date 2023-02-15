#pragma once

namespace BraveFish
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space               = 32,
		Apostrophe          = 39, /* ' */
		Comma               = 44, /* , */
		Minus               = 45, /* - */
		Period              = 46, /* . */
		Slash               = 47, /* / */

		D0                  = 48, /* 0 */
		D1                  = 49, /* 1 */
		D2                  = 50, /* 2 */
		D3                  = 51, /* 3 */
		D4                  = 52, /* 4 */
		D5                  = 53, /* 5 */
		D6                  = 54, /* 6 */
		D7                  = 55, /* 7 */
		D8                  = 56, /* 8 */
		D9                  = 57, /* 9 */

		Semicolon           = 59, /* ; */
		Equal               = 61, /* = */

		A                   = 65,
		B                   = 66,
		C                   = 67,
		D                   = 68,
		E                   = 69,
		F                   = 70,
		G                   = 71,
		H                   = 72,
		I                   = 73,
		J                   = 74,
		K                   = 75,
		L                   = 76,
		M                   = 77,
		N                   = 78,
		O                   = 79,
		P                   = 80,
		Q                   = 81,
		R                   = 82,
		S                   = 83,
		T                   = 84,
		U                   = 85,
		V                   = 86,
		W                   = 87,
		X                   = 88,
		Y                   = 89,
		Z                   = 90,

		LeftBracket         = 91,  /* [ */
		Backslash           = 92,  /* \ */
		RightBracket        = 93,  /* ] */
		GraveAccent         = 96,  /* ` */

		World1              = 161, /* non-US #1 */
		World2              = 162, /* non-US #2 */

		/* Function keys */
		Escape              = 256,
		Enter               = 257,
		Tab                 = 258,
		Backspace           = 259,
		Insert              = 260,
		Delete              = 261,
		Right               = 262,
		Left                = 263,
		Down                = 264,
		Up                  = 265,
		PageUp              = 266,
		PageDown            = 267,
		Home                = 268,
		End                 = 269,
		CapsLock            = 280,
		ScrollLock          = 281,
		NumLock             = 282,
		PrintScreen         = 283,
		Pause               = 284,
		F1                  = 290,
		F2                  = 291,
		F3                  = 292,
		F4                  = 293,
		F5                  = 294,
		F6                  = 295,
		F7                  = 296,
		F8                  = 297,
		F9                  = 298,
		F10                 = 299,
		F11                 = 300,
		F12                 = 301,
		F13                 = 302,
		F14                 = 303,
		F15                 = 304,
		F16                 = 305,
		F17                 = 306,
		F18                 = 307,
		F19                 = 308,
		F20                 = 309,
		F21                 = 310,
		F22                 = 311,
		F23                 = 312,
		F24                 = 313,
		F25                 = 314,

		/* Keypad */
		KP0                 = 320,
		KP1                 = 321,
		KP2                 = 322,
		KP3                 = 323,
		KP4                 = 324,
		KP5                 = 325,
		KP6                 = 326,
		KP7                 = 327,
		KP8                 = 328,
		KP9                 = 329,
		KPDecimal           = 330,
		KPDivide            = 331,
		KPMultiply          = 332,
		KPSubtract          = 333,
		KPAdd               = 334,
		KPEnter             = 335,
		KPEqual             = 336,

		LeftShift           = 340,
		LeftControl         = 341,
		LeftAlt             = 342,
		LeftSuper           = 343,
		RightShift          = 344,
		RightControl        = 345,
		RightAlt            = 346,
		RightSuper          = 347,
		Menu                = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define HZ_KEY_SPACE           ::BraveFish::Key::Space
#define HZ_KEY_APOSTROPHE      ::BraveFish::Key::Apostrophe    /* ' */
#define HZ_KEY_COMMA           ::BraveFish::Key::Comma         /* , */
#define HZ_KEY_MINUS           ::BraveFish::Key::Minus         /* - */
#define HZ_KEY_PERIOD          ::BraveFish::Key::Period        /* . */
#define HZ_KEY_SLASH           ::BraveFish::Key::Slash         /* / */
#define HZ_KEY_0               ::BraveFish::Key::D0
#define HZ_KEY_1               ::BraveFish::Key::D1
#define HZ_KEY_2               ::BraveFish::Key::D2
#define HZ_KEY_3               ::BraveFish::Key::D3
#define HZ_KEY_4               ::BraveFish::Key::D4
#define HZ_KEY_5               ::BraveFish::Key::D5
#define HZ_KEY_6               ::BraveFish::Key::D6
#define HZ_KEY_7               ::BraveFish::Key::D7
#define HZ_KEY_8               ::BraveFish::Key::D8
#define HZ_KEY_9               ::BraveFish::Key::D9
#define HZ_KEY_SEMICOLON       ::BraveFish::Key::Semicolon     /* ; */
#define HZ_KEY_EQUAL           ::BraveFish::Key::Equal         /* = */
#define HZ_KEY_A               ::BraveFish::Key::A
#define HZ_KEY_B               ::BraveFish::Key::B
#define HZ_KEY_C               ::BraveFish::Key::C
#define HZ_KEY_D               ::BraveFish::Key::D
#define HZ_KEY_E               ::BraveFish::Key::E
#define HZ_KEY_F               ::BraveFish::Key::F
#define HZ_KEY_G               ::BraveFish::Key::G
#define HZ_KEY_H               ::BraveFish::Key::H
#define HZ_KEY_I               ::BraveFish::Key::I
#define HZ_KEY_J               ::BraveFish::Key::J
#define HZ_KEY_K               ::BraveFish::Key::K
#define HZ_KEY_L               ::BraveFish::Key::L
#define HZ_KEY_M               ::BraveFish::Key::M
#define HZ_KEY_N               ::BraveFish::Key::N
#define HZ_KEY_O               ::BraveFish::Key::O
#define HZ_KEY_P               ::BraveFish::Key::P
#define HZ_KEY_Q               ::BraveFish::Key::Q
#define HZ_KEY_R               ::BraveFish::Key::R
#define HZ_KEY_S               ::BraveFish::Key::S
#define HZ_KEY_T               ::BraveFish::Key::T
#define HZ_KEY_U               ::BraveFish::Key::U
#define HZ_KEY_V               ::BraveFish::Key::V
#define HZ_KEY_W               ::BraveFish::Key::W
#define HZ_KEY_X               ::BraveFish::Key::X
#define HZ_KEY_Y               ::BraveFish::Key::Y
#define HZ_KEY_Z               ::BraveFish::Key::Z
#define HZ_KEY_LEFT_BRACKET    ::BraveFish::Key::LeftBracket   /* [ */
#define HZ_KEY_BACKSLASH       ::BraveFish::Key::Backslash     /* \ */
#define HZ_KEY_RIGHT_BRACKET   ::BraveFish::Key::RightBracket  /* ] */
#define HZ_KEY_GRAVE_ACCENT    ::BraveFish::Key::GraveAccent   /* ` */
#define HZ_KEY_WORLD_1         ::BraveFish::Key::World1        /* non-US #1 */
#define HZ_KEY_WORLD_2         ::BraveFish::Key::World2        /* non-US #2 */

/* Function keys */
#define HZ_KEY_ESCAPE          ::BraveFish::Key::Escape
#define HZ_KEY_ENTER           ::BraveFish::Key::Enter
#define HZ_KEY_TAB             ::BraveFish::Key::Tab
#define HZ_KEY_BACKSPACE       ::BraveFish::Key::Backspace
#define HZ_KEY_INSERT          ::BraveFish::Key::Insert
#define HZ_KEY_DELETE          ::BraveFish::Key::Delete
#define HZ_KEY_RIGHT           ::BraveFish::Key::Right
#define HZ_KEY_LEFT            ::BraveFish::Key::Left
#define HZ_KEY_DOWN            ::BraveFish::Key::Down
#define HZ_KEY_UP              ::BraveFish::Key::Up
#define HZ_KEY_PAGE_UP         ::BraveFish::Key::PageUp
#define HZ_KEY_PAGE_DOWN       ::BraveFish::Key::PageDown
#define HZ_KEY_HOME            ::BraveFish::Key::Home
#define HZ_KEY_END             ::BraveFish::Key::End
#define HZ_KEY_CAPS_LOCK       ::BraveFish::Key::CapsLock
#define HZ_KEY_SCROLL_LOCK     ::BraveFish::Key::ScrollLock
#define HZ_KEY_NUM_LOCK        ::BraveFish::Key::NumLock
#define HZ_KEY_PRINT_SCREEN    ::BraveFish::Key::PrintScreen
#define HZ_KEY_PAUSE           ::BraveFish::Key::Pause
#define HZ_KEY_F1              ::BraveFish::Key::F1
#define HZ_KEY_F2              ::BraveFish::Key::F2
#define HZ_KEY_F3              ::BraveFish::Key::F3
#define HZ_KEY_F4              ::BraveFish::Key::F4
#define HZ_KEY_F5              ::BraveFish::Key::F5
#define HZ_KEY_F6              ::BraveFish::Key::F6
#define HZ_KEY_F7              ::BraveFish::Key::F7
#define HZ_KEY_F8              ::BraveFish::Key::F8
#define HZ_KEY_F9              ::BraveFish::Key::F9
#define HZ_KEY_F10             ::BraveFish::Key::F10
#define HZ_KEY_F11             ::BraveFish::Key::F11
#define HZ_KEY_F12             ::BraveFish::Key::F12
#define HZ_KEY_F13             ::BraveFish::Key::F13
#define HZ_KEY_F14             ::BraveFish::Key::F14
#define HZ_KEY_F15             ::BraveFish::Key::F15
#define HZ_KEY_F16             ::BraveFish::Key::F16
#define HZ_KEY_F17             ::BraveFish::Key::F17
#define HZ_KEY_F18             ::BraveFish::Key::F18
#define HZ_KEY_F19             ::BraveFish::Key::F19
#define HZ_KEY_F20             ::BraveFish::Key::F20
#define HZ_KEY_F21             ::BraveFish::Key::F21
#define HZ_KEY_F22             ::BraveFish::Key::F22
#define HZ_KEY_F23             ::BraveFish::Key::F23
#define HZ_KEY_F24             ::BraveFish::Key::F24
#define HZ_KEY_F25             ::BraveFish::Key::F25

/* Keypad */
#define HZ_KEY_KP_0            ::BraveFish::Key::KP0
#define HZ_KEY_KP_1            ::BraveFish::Key::KP1
#define HZ_KEY_KP_2            ::BraveFish::Key::KP2
#define HZ_KEY_KP_3            ::BraveFish::Key::KP3
#define HZ_KEY_KP_4            ::BraveFish::Key::KP4
#define HZ_KEY_KP_5            ::BraveFish::Key::KP5
#define HZ_KEY_KP_6            ::BraveFish::Key::KP6
#define HZ_KEY_KP_7            ::BraveFish::Key::KP7
#define HZ_KEY_KP_8            ::BraveFish::Key::KP8
#define HZ_KEY_KP_9            ::BraveFish::Key::KP9
#define HZ_KEY_KP_DECIMAL      ::BraveFish::Key::KPDecimal
#define HZ_KEY_KP_DIVIDE       ::BraveFish::Key::KPDivide
#define HZ_KEY_KP_MULTIPLY     ::BraveFish::Key::KPMultiply
#define HZ_KEY_KP_SUBTRACT     ::BraveFish::Key::KPSubtract
#define HZ_KEY_KP_ADD          ::BraveFish::Key::KPAdd
#define HZ_KEY_KP_ENTER        ::BraveFish::Key::KPEnter
#define HZ_KEY_KP_EQUAL        ::BraveFish::Key::KPEqual

#define HZ_KEY_LEFT_SHIFT      ::BraveFish::Key::LeftShift
#define HZ_KEY_LEFT_CONTROL    ::BraveFish::Key::LeftControl
#define HZ_KEY_LEFT_ALT        ::BraveFish::Key::LeftAlt
#define HZ_KEY_LEFT_SUPER      ::BraveFish::Key::LeftSuper
#define HZ_KEY_RIGHT_SHIFT     ::BraveFish::Key::RightShift
#define HZ_KEY_RIGHT_CONTROL   ::BraveFish::Key::RightControl
#define HZ_KEY_RIGHT_ALT       ::BraveFish::Key::RightAlt
#define HZ_KEY_RIGHT_SUPER     ::BraveFish::Key::RightSuper
#define HZ_KEY_MENU            ::BraveFish::Key::Menu

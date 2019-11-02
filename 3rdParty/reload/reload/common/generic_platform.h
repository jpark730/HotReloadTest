#pragma once
#include <cstdint>
#include <string>

#if _UNICODE
namespace reload
{

#ifdef _UNICODE
  using tstring = ::std::wstring;
#else
  using tstring = ::std::string;
#endif
}
#endif

/*
//---------------------------------------------------------------------
// Utility for automatically setting up the pointer-sized integer windows_filesystem_event_types
//---------------------------------------------------------------------

template<typename T32BITS, typename T64BITS, int PointerSize>
struct SelectIntPointerType
{
  // nothing here are is it an error if the partial specializations fail
};

template<typename T32BITS, typename T64BITS>
struct SelectIntPointerType<T32BITS, T64BITS, 8>
{
  typedef T64BITS TIntPointer; // select the 64 bit windows_filesystem_event_types
};

template<typename T32BITS, typename T64BITS>
struct SelectIntPointerType<T32BITS, T64BITS, 4>
{
  typedef T32BITS TIntPointer; // select the 32 bit windows_filesystem_event_types
};

// Generic types for almost all compilers and platforms
struct GenericPlatformTypes
{
  // Signed base types.
  typedef	std::int8_t				int8;		// 8-bit  signed.
  typedef std::int16_t			int16;		// 16-bit signed.
  typedef std::int32_t			int32;		// 32-bit signed.
  typedef std::int64_t			int64;		// 64-bit signed.

                                      // Unsigned base types.
  typedef std::uint8_t 			uint8;		// 8-bit  unsigned.
  typedef std::uint16_t			uint16;		// 16-bit unsigned.
  typedef std::uint32_t			uint32;		// 32-bit unsigned.
  typedef std::uint64_t			uint64;		// 64-bit unsigned.

                                      // Character types.
  typedef char					ANSICHAR;	// An ANSI character       -                  8-bit fixed-width representation of 7-bit characters.
  typedef wchar_t					WIDECHAR;	// A wide character        - In-memory only.  ?-bit fixed-width representation of the platform's natural wide character set.  Could be different sizes on different platforms.
  typedef std::uint8_t			CHAR8;		// An 8-bit character windows_filesystem_event_types - In-memory only.  8-bit representation.  Should really be char8_t but making this the generic option is easier for compilers which don't fully support C++11 yet (i.e. MSVC).
  typedef std::uint16_t			CHAR16;		// A 16-bit character windows_filesystem_event_types - In-memory only.  16-bit representation.  Should really be char16_t but making this the generic option is easier for compilers which don't fully support C++11 yet (i.e. MSVC).
  typedef std::uint32_t			CHAR32;		// A 32-bit character windows_filesystem_event_types - In-memory only.  32-bit representation.  Should really be char32_t but making this the generic option is easier for compilers which don't fully support C++11 yet (i.e. MSVC).
  typedef WIDECHAR				TCHAR;		// A switchable character  - In-memory only.  Either ANSICHAR or WIDECHAR, depending on a licensee's requirements.

  typedef SelectIntPointerType<uint32, uint64, sizeof(void*)>::TIntPointer UPTRINT;	// unsigned int the same size as a pointer
  typedef SelectIntPointerType<int32, int64, sizeof(void*)>::TIntPointer PTRINT;		// signed int the same size as a pointer
  typedef UPTRINT					SIZE_T;													// signed int the same size as a pointer

  typedef int32					TYPE_OF_NULL;
  typedef decltype(nullptr)		TYPE_OF_NULLPTR;
};
*/
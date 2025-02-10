#pragma once
// IWYU pragma private; include "System/ApplicationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ApplicationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class ApplicationException;
}
// Write type traits
MARK_REF_PTR_T(::System::ApplicationException);
// Dependencies System.Exception
namespace System {
// Is value type: false
// CS Name: System.ApplicationException
class CORDL_TYPE ApplicationException : public ::System::Exception {
public:
// Declarations
static inline ::System::ApplicationException* New_ctor() ;

static inline ::System::ApplicationException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ApplicationException* New_ctor(::StringW  message) ;

static inline ::System::ApplicationException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x26d0798, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x26d0910, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x26d0818, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x26d0890, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplicationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplicationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationException(ApplicationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationException(ApplicationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ApplicationException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ApplicationException);
DEFINE_IL2CPP_ARG_TYPE(::System::ApplicationException*, "System", "ApplicationException");

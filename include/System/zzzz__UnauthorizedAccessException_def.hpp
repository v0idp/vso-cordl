#pragma once
// IWYU pragma private; include "System/UnauthorizedAccessException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnauthorizedAccessException)
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
class UnauthorizedAccessException;
}
// Write type traits
MARK_REF_PTR_T(::System::UnauthorizedAccessException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.UnauthorizedAccessException
class CORDL_TYPE UnauthorizedAccessException : public ::System::SystemException {
public:
// Declarations
static inline ::System::UnauthorizedAccessException* New_ctor() ;

static inline ::System::UnauthorizedAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::UnauthorizedAccessException* New_ctor(::StringW  message) ;

static inline ::System::UnauthorizedAccessException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x27640b0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2764148, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x2764108, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x2764128, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnauthorizedAccessException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnauthorizedAccessException(UnauthorizedAccessException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnauthorizedAccessException(UnauthorizedAccessException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UnauthorizedAccessException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::UnauthorizedAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::UnauthorizedAccessException*, "System", "UnauthorizedAccessException");

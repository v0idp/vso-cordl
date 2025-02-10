#pragma once
// IWYU pragma private; include "System/ThrowHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowHelper)
namespace System::Collections::Generic {
class KeyNotFoundException;
}
namespace System {
class ArgumentException;
}
namespace System {
class ArgumentNullException;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Array;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
struct ExceptionResource;
}
namespace System {
class Exception;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ThrowHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::ThrowHelper);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
// Declarations
/// @brief Method CreateArgumentException_DestinationTooShort, addr 0x2766144, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentException_DestinationTooShort() ;

/// @brief Method CreateArgumentNullException, addr 0x2766004, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x276624c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException() ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x27662c4, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArrayTypeMismatchException, addr 0x27660cc, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArrayTypeMismatchException() ;

/// @brief Method CreateIndexOutOfRangeException, addr 0x27661d4, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateIndexOutOfRangeException() ;

/// @brief Method CreateThrowNotSupportedException, addr 0x276638c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateThrowNotSupportedException() ;

/// @brief Method GetAddingDuplicateWithKeyArgumentException, addr 0x2766e8c, size 0x90, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method GetArgumentException, addr 0x2767224, size 0xa4, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method GetArgumentName, addr 0x27668c8, size 0x184, virtual false, abstract: false, final false
static inline ::StringW GetArgumentName(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentNullException, addr 0x2767100, size 0x6c, virtual false, abstract: false, final false
static inline ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0x2766d54, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::StringW  resource) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0x276716c, size 0xb8, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method GetArraySegmentCtorValidationFailedException, addr 0x27670d0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* GetArraySegmentCtorValidationFailedException(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method GetInvalidOperationException, addr 0x2767050, size 0x5c, virtual false, abstract: false, final false
static inline ::System::InvalidOperationException* GetInvalidOperationException(::StringW  str) ;

/// @brief Method GetKeyNotFoundException, addr 0x2766f40, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object*  key) ;

/// @brief Method GetResourceName, addr 0x27665d8, size 0x28c, virtual false, abstract: false, final false
static inline ::StringW GetResourceName(::System::ExceptionResource  resource) ;

/// @brief Method IfNullAndNullsAreIllegalThenThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void IfNullAndNullsAreIllegalThenThrow(::System::Object*  value, ::System::ExceptionArgument  argName) ;

/// @brief Method ThrowAddingDuplicateWithKeyArgumentException, addr 0x2766f1c, size 0x24, virtual false, abstract: false, final false
static inline void ThrowAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method ThrowArgumentException, addr 0x2766588, size 0x50, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentException, addr 0x2766864, size 0x64, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource, ::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentException_Argument_InvalidArrayType, addr 0x2766e40, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowArgumentException_Argument_InvalidArrayType() ;

/// @brief Method ThrowArgumentException_DestinationTooShort, addr 0x2766120, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentException_DestinationTooShort() ;

/// @brief Method ThrowArgumentNullException, addr 0x2757874, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x2766228, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException() ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x27662a0, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x2766a4c, size 0x9c, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentOutOfRange_IndexException, addr 0x2766dd0, size 0x38, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRange_IndexException() ;

/// @brief Method ThrowArraySegmentCtorValidationFailedExceptions, addr 0x27670ac, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArraySegmentCtorValidationFailedExceptions(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method ThrowArrayTypeMismatchException, addr 0x27660a8, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArrayTypeMismatchException() ;

/// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count, addr 0x27672f4, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count() ;

/// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException, addr 0x2766e08, size 0x38, virtual false, abstract: false, final false
static inline void ThrowIndexArgumentOutOfRange_NeedNonNegNumException() ;

/// @brief Method ThrowIndexOutOfRangeException, addr 0x27661b0, size 0x24, virtual false, abstract: false, final false
static inline void ThrowIndexOutOfRangeException() ;

/// @brief Method ThrowInvalidOperationException, addr 0x2766ae8, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported, addr 0x2767020, size 0x30, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_ConcurrentOperationsNotSupported() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded, addr 0x2766cbc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumEnded() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion, addr 0x2766bd8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted, addr 0x2766c70, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen, addr 0x2766c24, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue, addr 0x2766d08, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_NoValue() ;

/// @brief Method ThrowInvalidTypeWithPointersNotSupported, addr 0x2766fc0, size 0x60, virtual false, abstract: false, final false
static inline void ThrowInvalidTypeWithPointersNotSupported(::System::Type*  targetType) ;

/// @brief Method ThrowKeyNotFoundException, addr 0x2766fb8, size 0x8, virtual false, abstract: false, final false
static inline void ThrowKeyNotFoundException(::System::Object*  key) ;

/// @brief Method ThrowNotSupportedException, addr 0x2766368, size 0x24, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException() ;

/// @brief Method ThrowNotSupportedException, addr 0x2766b88, size 0x50, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowSerializationException, addr 0x2766b38, size 0x50, virtual false, abstract: false, final false
static inline void ThrowSerializationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index, addr 0x27672c8, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index() ;

/// @brief Method ThrowWrongKeyTypeArgumentException, addr 0x27663e0, size 0xd4, virtual false, abstract: false, final false
static inline void ThrowWrongKeyTypeArgumentException(::System::Object*  key, ::System::Type*  targetType) ;

/// @brief Method ThrowWrongValueTypeArgumentException, addr 0x27664b4, size 0xd4, virtual false, abstract: false, final false
static inline void ThrowWrongValueTypeArgumentException(::System::Object*  value, ::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowHelper(ThrowHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowHelper(ThrowHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ThrowHelper, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ThrowHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::ThrowHelper*, "System", "ThrowHelper");

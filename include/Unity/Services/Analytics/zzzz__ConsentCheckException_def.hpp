#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/ConsentCheckException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Analytics/zzzz__ConsentCheckExceptionReason_def.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentCheckException)
namespace System {
class Exception;
}
namespace Unity::Services::Analytics {
struct ConsentCheckExceptionReason;
}
// Forward declare root types
namespace Unity::Services::Analytics {
class ConsentCheckException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::ConsentCheckException);
// Dependencies Unity.Services.Analytics.ConsentCheckExceptionReason, Unity.Services.Core.RequestFailedException
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.ConsentCheckException
class CORDL_TYPE ConsentCheckException : public ::Unity::Services::Core::RequestFailedException {
public:
// Declarations
 __declspec(property(get=get_Reason, put=set_Reason)) ::Unity::Services::Analytics::ConsentCheckExceptionReason  Reason;

/// @brief Field <Reason>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__Reason_k__BackingField, put=__cordl_internal_set__Reason_k__BackingField)) ::Unity::Services::Analytics::ConsentCheckExceptionReason  _Reason_k__BackingField;

static inline ::Unity::Services::Analytics::ConsentCheckException* New_ctor(::Unity::Services::Analytics::ConsentCheckExceptionReason  reason, int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException) ;

constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason const& __cordl_internal_get__Reason_k__BackingField() const;

constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason& __cordl_internal_get__Reason_k__BackingField() ;

constexpr void __cordl_internal_set__Reason_k__BackingField(::Unity::Services::Analytics::ConsentCheckExceptionReason  value) ;

/// @brief Method .ctor, addr 0x2e8eee8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::ConsentCheckExceptionReason  reason, int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method get_Reason, addr 0x2e8eed8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Analytics::ConsentCheckExceptionReason get_Reason() ;

/// @brief Method set_Reason, addr 0x2e8eee0, size 0x8, virtual false, abstract: false, final false
inline void set_Reason(::Unity::Services::Analytics::ConsentCheckExceptionReason  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsentCheckException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsentCheckException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsentCheckException(ConsentCheckException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsentCheckException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsentCheckException(ConsentCheckException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11859};

/// @brief Field <Reason>k__BackingField, offset: 0x90, size: 0x4, def value: None
 ::Unity::Services::Analytics::ConsentCheckExceptionReason  ____Reason_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::ConsentCheckException, ____Reason_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::ConsentCheckException, 0x98>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::ConsentCheckException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::ConsentCheckException*, "Unity.Services.Analytics", "ConsentCheckException");

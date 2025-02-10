#pragma once
// IWYU pragma private; include "Firebase/InitializationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/zzzz__InitResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitializationException)
namespace Firebase {
struct InitResult;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Firebase {
class InitializationException;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::InitializationException);
// Dependencies Firebase.InitResult, System.Exception
namespace Firebase {
// Is value type: false
// CS Name: Firebase.InitializationException
class CORDL_TYPE InitializationException : public ::System::Exception {
public:
// Declarations
 __declspec(property(put=set_InitResult)) ::Firebase::InitResult  InitResult;

/// @brief Field <InitResult>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__InitResult_k__BackingField, put=__cordl_internal_set__InitResult_k__BackingField)) ::Firebase::InitResult  _InitResult_k__BackingField;

static inline ::Firebase::InitializationException* New_ctor(::Firebase::InitResult  result) ;

static inline ::Firebase::InitializationException* New_ctor(::Firebase::InitResult  result, ::StringW  message) ;

static inline ::Firebase::InitializationException* New_ctor(::Firebase::InitResult  result, ::StringW  message, ::System::Exception*  inner) ;

constexpr ::Firebase::InitResult const& __cordl_internal_get__InitResult_k__BackingField() const;

constexpr ::Firebase::InitResult& __cordl_internal_get__InitResult_k__BackingField() ;

constexpr void __cordl_internal_set__InitResult_k__BackingField(::Firebase::InitResult  value) ;

/// @brief Method .ctor, addr 0x18f6b64, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Firebase::InitResult  result) ;

/// @brief Method .ctor, addr 0x18f1010, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Firebase::InitResult  result, ::StringW  message) ;

/// @brief Method .ctor, addr 0x18f3420, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::Firebase::InitResult  result, ::StringW  message, ::System::Exception*  inner) ;

/// @brief Method set_InitResult, addr 0x18f6bd0, size 0x8, virtual false, abstract: false, final false
inline void set_InitResult(::Firebase::InitResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializationException(InitializationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializationException(InitializationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11841};

/// @brief Field <InitResult>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 ::Firebase::InitResult  ____InitResult_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::InitializationException, ____InitResult_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::InitializationException, 0x90>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::InitializationException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::InitializationException*, "Firebase", "InitializationException");

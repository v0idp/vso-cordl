#pragma once
// IWYU pragma private; include "VROSC/ErrorHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorHandler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Exception;
}
namespace VROSC {
class ErrorMessages;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class ErrorHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ErrorHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ErrorHandler
class CORDL_TYPE ErrorHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _errorMessages, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorMessages, put=__cordl_internal_set__errorMessages)) ::UnityW<::VROSC::ErrorMessages>  _errorMessages;

/// @brief Field _errorsDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__errorsDict, put=setStaticF__errorsDict)) ::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>*  _errorsDict;

/// @brief Method Awake, addr 0x1883e90, size 0x2b8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetError, addr 0x1884488, size 0x320, virtual false, abstract: false, final false
static inline ::VROSC::Error GetError(::System::Exception*  e) ;

/// @brief Method GetError, addr 0x1884380, size 0x108, virtual false, abstract: false, final false
static inline ::VROSC::Error GetError(int32_t  fbErrorCode) ;

/// @brief Method GetError, addr 0x18842a0, size 0xe0, virtual false, abstract: false, final false
static inline ::VROSC::Error GetError(int64_t  httpErrorCode) ;

/// @brief Method GetMessage, addr 0x1884148, size 0x158, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::VROSC::Error  error) ;

static inline ::VROSC::ErrorHandler* New_ctor() ;

constexpr ::UnityW<::VROSC::ErrorMessages> const& __cordl_internal_get__errorMessages() const;

constexpr ::UnityW<::VROSC::ErrorMessages>& __cordl_internal_get__errorMessages() ;

constexpr void __cordl_internal_set__errorMessages(::UnityW<::VROSC::ErrorMessages>  value) ;

/// @brief Method .ctor, addr 0x18847a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>* getStaticF__errorsDict() ;

static inline void setStaticF__errorsDict(::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorHandler(ErrorHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorHandler(ErrorHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{599};

/// @brief Field _errorMessages, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ErrorMessages>  ____errorMessages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ErrorHandler, ____errorMessages) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ErrorHandler, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ErrorHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ErrorHandler*, "VROSC", "ErrorHandler");

#pragma once
// IWYU pragma private; include "Firebase/ErrorMessages.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ErrorMessages)
// Forward declare root types
namespace Firebase {
class ErrorMessages;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::ErrorMessages);
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.ErrorMessages
class CORDL_TYPE ErrorMessages : public ::System::Object {
public:
// Declarations
/// @brief Field DEPENDENCY_NOT_FOUND_ERROR_ANDROID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DEPENDENCY_NOT_FOUND_ERROR_ANDROID, put=setStaticF_DEPENDENCY_NOT_FOUND_ERROR_ANDROID)) ::StringW  DEPENDENCY_NOT_FOUND_ERROR_ANDROID;

/// @brief Field DEPENDENCY_NOT_FOUND_ERROR_GENERIC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DEPENDENCY_NOT_FOUND_ERROR_GENERIC, put=setStaticF_DEPENDENCY_NOT_FOUND_ERROR_GENERIC)) ::StringW  DEPENDENCY_NOT_FOUND_ERROR_GENERIC;

/// @brief Field DEPENDENCY_NOT_FOUND_ERROR_IOS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DEPENDENCY_NOT_FOUND_ERROR_IOS, put=setStaticF_DEPENDENCY_NOT_FOUND_ERROR_IOS)) ::StringW  DEPENDENCY_NOT_FOUND_ERROR_IOS;

/// @brief Field DLL_NOT_FOUND_ERROR_ANDROID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DLL_NOT_FOUND_ERROR_ANDROID, put=setStaticF_DLL_NOT_FOUND_ERROR_ANDROID)) ::StringW  DLL_NOT_FOUND_ERROR_ANDROID;

/// @brief Field DLL_NOT_FOUND_ERROR_GENERIC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DLL_NOT_FOUND_ERROR_GENERIC, put=setStaticF_DLL_NOT_FOUND_ERROR_GENERIC)) ::StringW  DLL_NOT_FOUND_ERROR_GENERIC;

/// @brief Field DLL_NOT_FOUND_ERROR_IOS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DLL_NOT_FOUND_ERROR_IOS, put=setStaticF_DLL_NOT_FOUND_ERROR_IOS)) ::StringW  DLL_NOT_FOUND_ERROR_IOS;

static inline ::StringW getStaticF_DEPENDENCY_NOT_FOUND_ERROR_ANDROID() ;

static inline ::StringW getStaticF_DEPENDENCY_NOT_FOUND_ERROR_GENERIC() ;

static inline ::StringW getStaticF_DEPENDENCY_NOT_FOUND_ERROR_IOS() ;

static inline ::StringW getStaticF_DLL_NOT_FOUND_ERROR_ANDROID() ;

static inline ::StringW getStaticF_DLL_NOT_FOUND_ERROR_GENERIC() ;

static inline ::StringW getStaticF_DLL_NOT_FOUND_ERROR_IOS() ;

/// @brief Method get_DependencyNotFoundErrorMessage, addr 0x18f3524, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW get_DependencyNotFoundErrorMessage() ;

/// @brief Method get_DllNotFoundExceptionErrorMessage, addr 0x18f0f48, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW get_DllNotFoundExceptionErrorMessage() ;

static inline void setStaticF_DEPENDENCY_NOT_FOUND_ERROR_ANDROID(::StringW  value) ;

static inline void setStaticF_DEPENDENCY_NOT_FOUND_ERROR_GENERIC(::StringW  value) ;

static inline void setStaticF_DEPENDENCY_NOT_FOUND_ERROR_IOS(::StringW  value) ;

static inline void setStaticF_DLL_NOT_FOUND_ERROR_ANDROID(::StringW  value) ;

static inline void setStaticF_DLL_NOT_FOUND_ERROR_GENERIC(::StringW  value) ;

static inline void setStaticF_DLL_NOT_FOUND_ERROR_IOS(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorMessages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorMessages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorMessages(ErrorMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorMessages(ErrorMessages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::ErrorMessages, 0x10>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::ErrorMessages);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::ErrorMessages*, "Firebase", "ErrorMessages");

#pragma once
// IWYU pragma private; include "VROSC/ErrorMessages.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ErrorMessages)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class ErrorMessages_ErrorMessagePair;
}
// Forward declare root types
namespace VROSC {
class ErrorMessages;
}
namespace VROSC {
class ErrorMessages_ErrorMessagePair;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ErrorMessages);
MARK_REF_PTR_T(::VROSC::ErrorMessages_ErrorMessagePair);
// Dependencies System.Object, VROSC.Error
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ErrorMessages/ErrorMessagePair
class CORDL_TYPE ErrorMessages_ErrorMessagePair : public ::System::Object {
public:
// Declarations
/// @brief Field Id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::VROSC::Error  Id;

/// @brief Field Message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::VROSC::ErrorMessages_ErrorMessagePair* New_ctor() ;

constexpr ::VROSC::Error const& __cordl_internal_get_Id() const;

constexpr ::VROSC::Error& __cordl_internal_get_Id() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Id(::VROSC::Error  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0x18848b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorMessages_ErrorMessagePair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorMessages_ErrorMessagePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorMessages_ErrorMessagePair(ErrorMessages_ErrorMessagePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMessages_ErrorMessagePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorMessages_ErrorMessagePair(ErrorMessages_ErrorMessagePair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{600};

/// @brief Field Id, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Error  ___Id;

/// @brief Field Message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ErrorMessages_ErrorMessagePair, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ErrorMessages_ErrorMessagePair, ___Message) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ErrorMessages_ErrorMessagePair, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ErrorMessages
class CORDL_TYPE ErrorMessages : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ErrorMessagePair = ::VROSC::ErrorMessages_ErrorMessagePair;

/// @brief Field Errors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Errors, put=__cordl_internal_set_Errors)) ::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>*  Errors;

static inline ::VROSC::ErrorMessages* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>* const& __cordl_internal_get_Errors() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>*& __cordl_internal_get_Errors() ;

constexpr void __cordl_internal_set_Errors(::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>*  value) ;

/// @brief Method .ctor, addr 0x188483c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{601};

/// @brief Field Errors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>*  ___Errors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ErrorMessages, ___Errors) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ErrorMessages, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ErrorMessages);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ErrorMessages*, "VROSC", "ErrorMessages");
NEED_NO_BOX(::VROSC::ErrorMessages_ErrorMessagePair);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ErrorMessages_ErrorMessagePair*, "VROSC", "ErrorMessages/ErrorMessagePair");

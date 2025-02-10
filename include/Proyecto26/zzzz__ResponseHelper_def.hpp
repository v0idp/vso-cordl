#pragma once
// IWYU pragma private; include "Proyecto26/ResponseHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseHelper)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Proyecto26 {
class ResponseHelper;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::ResponseHelper);
// Dependencies System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.ResponseHelper
class CORDL_TYPE ResponseHelper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Data;

 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_Headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Headers;

 __declspec(property(get=get_Request, put=set_Request)) ::UnityEngine::Networking::UnityWebRequest*  Request;

 __declspec(property(get=get_StatusCode)) int64_t  StatusCode;

 __declspec(property(get=get_Text)) ::StringW  Text;

/// @brief Field <Request>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Request_k__BackingField, put=__cordl_internal_set__Request_k__BackingField)) ::UnityEngine::Networking::UnityWebRequest*  _Request_k__BackingField;

/// @brief Method GetHeader, addr 0x17f8b00, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetHeader(::StringW  name) ;

static inline ::Proyecto26::ResponseHelper* New_ctor(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method ToString, addr 0x17f8b1c, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__Request_k__BackingField() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__Request_k__BackingField() ;

constexpr void __cordl_internal_set__Request_k__BackingField(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x17f891c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method get_Data, addr 0x17f8960, size 0xac, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Data() ;

/// @brief Method get_Error, addr 0x17f8ac8, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_Error() ;

/// @brief Method get_Headers, addr 0x17f8ae4, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_Headers() ;

/// @brief Method get_Request, addr 0x17f890c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* get_Request() ;

/// @brief Method get_StatusCode, addr 0x17f8944, size 0x1c, virtual false, abstract: false, final false
inline int64_t get_StatusCode() ;

/// @brief Method get_Text, addr 0x17f8a0c, size 0xbc, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// @brief Method set_Request, addr 0x17f8914, size 0x8, virtual false, abstract: false, final false
inline void set_Request(::UnityEngine::Networking::UnityWebRequest*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResponseHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResponseHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResponseHelper(ResponseHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResponseHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResponseHelper(ResponseHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1739};

/// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____Request_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Proyecto26::ResponseHelper, ____Request_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Proyecto26::ResponseHelper, 0x18>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::ResponseHelper);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::ResponseHelper*, "Proyecto26", "ResponseHelper");

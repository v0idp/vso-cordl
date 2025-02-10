#pragma once
// IWYU pragma private; include "Proyecto26/Common/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace Proyecto26::Common {
class Extensions___c;
}
namespace Proyecto26::Common {
class Extensions___c__DisplayClass3_0;
}
namespace Proyecto26 {
class RequestHelper;
}
namespace Proyecto26 {
class ResponseHelper;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2_KeyCollection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Proyecto26::Common {
class Extensions;
}
namespace Proyecto26::Common {
class Extensions___c;
}
namespace Proyecto26::Common {
class Extensions___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::Common::Extensions);
MARK_REF_PTR_T(::Proyecto26::Common::Extensions___c);
MARK_REF_PTR_T(::Proyecto26::Common::Extensions___c__DisplayClass3_0);
// Dependencies System.Object
namespace Proyecto26::Common {
// Is value type: false
// CS Name: Proyecto26.Common.Extensions/<>c
class CORDL_TYPE Extensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Proyecto26::Common::Extensions___c*  __9;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  __9__3_1;

static inline ::Proyecto26::Common::Extensions___c* New_ctor() ;

/// @brief Method <BuildUrl>b__3_1, addr 0x17fa5c4, size 0x84, virtual false, abstract: false, final false
inline ::StringW _BuildUrl_b__3_1(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  p) ;

/// @brief Method .ctor, addr 0x17fa5bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Proyecto26::Common::Extensions___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* getStaticF___9__3_1() ;

static inline void setStaticF___9(::Proyecto26::Common::Extensions___c*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions___c(Extensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions___c(Extensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::Common::Extensions___c, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26::Common
// Dependencies System.Object
namespace Proyecto26::Common {
// Is value type: false
// CS Name: Proyecto26.Common.Extensions/<>c__DisplayClass3_0
class CORDL_TYPE Extensions___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field urlParamKeys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_urlParamKeys, put=__cordl_internal_set_urlParamKeys)) ::System::Collections::Generic::Dictionary_2_KeyCollection<::StringW,::StringW>*  urlParamKeys;

static inline ::Proyecto26::Common::Extensions___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <BuildUrl>b__0, addr 0x17fa648, size 0x70, virtual false, abstract: false, final false
inline bool _BuildUrl_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  p) ;

constexpr ::System::Collections::Generic::Dictionary_2_KeyCollection<::StringW,::StringW>* const& __cordl_internal_get_urlParamKeys() const;

constexpr ::System::Collections::Generic::Dictionary_2_KeyCollection<::StringW,::StringW>*& __cordl_internal_get_urlParamKeys() ;

constexpr void __cordl_internal_set_urlParamKeys(::System::Collections::Generic::Dictionary_2_KeyCollection<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x17fa558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions___c__DisplayClass3_0(Extensions___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions___c__DisplayClass3_0(Extensions___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1746};

/// @brief Field urlParamKeys, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2_KeyCollection<::StringW,::StringW>*  ___urlParamKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Proyecto26::Common::Extensions___c__DisplayClass3_0, ___urlParamKeys) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Proyecto26::Common::Extensions___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def Proyecto26::Common
// Dependencies System.Object
namespace Proyecto26::Common {
// Is value type: false
// CS Name: Proyecto26.Common.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
using __c = ::Proyecto26::Common::Extensions___c;

using __c__DisplayClass3_0 = ::Proyecto26::Common::Extensions___c__DisplayClass3_0;

/// @brief Method BuildUrl, addr 0x17f7878, size 0x2e0, virtual false, abstract: false, final false
static inline ::StringW BuildUrl(::StringW  uri, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  queryParams) ;

/// @brief Method CreateWebResponse, addr 0x17f81b0, size 0x5c, virtual false, abstract: false, final false
static inline ::Proyecto26::ResponseHelper* CreateWebResponse(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method EscapeURL, addr 0x17fa550, size 0x8, virtual false, abstract: false, final false
static inline ::StringW EscapeURL(::StringW  queryParam) ;

/// @brief Method IsValidRequest, addr 0x17f820c, size 0x70, virtual false, abstract: false, final false
static inline bool IsValidRequest(::UnityEngine::Networking::UnityWebRequest*  request, ::Proyecto26::RequestHelper*  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1747};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::Common::Extensions, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26::Common
NEED_NO_BOX(::Proyecto26::Common::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::Common::Extensions*, "Proyecto26.Common", "Extensions");
NEED_NO_BOX(::Proyecto26::Common::Extensions___c);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::Common::Extensions___c*, "Proyecto26.Common", "Extensions/<>c");
NEED_NO_BOX(::Proyecto26::Common::Extensions___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::Common::Extensions___c__DisplayClass3_0*, "Proyecto26.Common", "Extensions/<>c__DisplayClass3_0");

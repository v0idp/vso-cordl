#pragma once
// IWYU pragma private; include "GlobalNamespace/MainScript.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainScript)
namespace GlobalNamespace {
class MainScript___c;
}
namespace GlobalNamespace {
class MainScript___c__DisplayClass3_0;
}
namespace Models {
class Photo;
}
namespace Models {
class Todo;
}
namespace Models {
class User;
}
namespace Proyecto26::Models {
class Post;
}
namespace Proyecto26 {
class RequestException;
}
namespace Proyecto26 {
class RequestHelper;
}
namespace Proyecto26 {
class ResponseHelper;
}
namespace RSG {
template<typename PromisedT>
class IPromise_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
class MainScript;
}
namespace GlobalNamespace {
class MainScript___c;
}
namespace GlobalNamespace {
class MainScript___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainScript);
MARK_REF_PTR_T(::GlobalNamespace::MainScript___c);
MARK_REF_PTR_T(::GlobalNamespace::MainScript___c__DisplayClass3_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainScript/<>c
class CORDL_TYPE MainScript___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MainScript___c*  __9;

/// @brief Field <>9__5_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_1, put=setStaticF___9__5_1)) ::System::Action_2<::Proyecto26::RequestException*,int32_t>*  __9__5_1;

static inline ::GlobalNamespace::MainScript___c* New_ctor() ;

/// @brief Method <Put>b__5_1, addr 0x16bf74c, size 0x100, virtual false, abstract: false, final false
inline void _Put_b__5_1(::Proyecto26::RequestException*  err, int32_t  retries) ;

/// @brief Method .ctor, addr 0x16bf744, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MainScript___c* getStaticF___9() ;

static inline ::System::Action_2<::Proyecto26::RequestException*,int32_t>* getStaticF___9__5_1() ;

static inline void setStaticF___9(::GlobalNamespace::MainScript___c*  value) ;

static inline void setStaticF___9__5_1(::System::Action_2<::Proyecto26::RequestException*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainScript___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainScript___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainScript___c(MainScript___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainScript___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainScript___c(MainScript___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainScript___c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainScript/<>c__DisplayClass3_0
class CORDL_TYPE MainScript___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MainScript>  __4__this;

/// @brief Field requestOptions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestOptions, put=__cordl_internal_set_requestOptions)) ::Proyecto26::RequestHelper*  requestOptions;

static inline ::GlobalNamespace::MainScript___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <Get>b__0, addr 0x16bf84c, size 0xc0, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<::ArrayW<::Models::Todo*,::Array<::Models::Todo*>*>>* _Get_b__0(::ArrayW<::Proyecto26::Models::Post*,::Array<::Proyecto26::Models::Post*>*>  res) ;

/// @brief Method <Get>b__1, addr 0x16bf90c, size 0xc0, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<::ArrayW<::Models::User*,::Array<::Models::User*>*>>* _Get_b__1(::ArrayW<::Models::Todo*,::Array<::Models::Todo*>*>  res) ;

/// @brief Method <Get>b__2, addr 0x16bf9cc, size 0x194, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<::ArrayW<::Models::Photo*,::Array<::Models::Photo*>*>>* _Get_b__2(::ArrayW<::Models::User*,::Array<::Models::User*>*>  res) ;

/// @brief Method <Get>b__3, addr 0x16bfb60, size 0x78, virtual false, abstract: false, final false
inline void _Get_b__3(::ArrayW<::Models::Photo*,::Array<::Models::Photo*>*>  res) ;

/// @brief Method <Get>b__4, addr 0x16bfbd8, size 0x60, virtual false, abstract: false, final false
inline void _Get_b__4(::System::Exception*  err) ;

constexpr ::UnityW<::GlobalNamespace::MainScript> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MainScript>& __cordl_internal_get___4__this() ;

constexpr ::Proyecto26::RequestHelper* const& __cordl_internal_get_requestOptions() const;

constexpr ::Proyecto26::RequestHelper*& __cordl_internal_get_requestOptions() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MainScript>  value) ;

constexpr void __cordl_internal_set_requestOptions(::Proyecto26::RequestHelper*  value) ;

/// @brief Method .ctor, addr 0x16bea5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainScript___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainScript___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainScript___c__DisplayClass3_0(MainScript___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainScript___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainScript___c__DisplayClass3_0(MainScript___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MainScript>  _____4__this;

/// @brief Field requestOptions, offset: 0x18, size: 0x8, def value: None
 ::Proyecto26::RequestHelper*  ___requestOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainScript___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainScript___c__DisplayClass3_0, ___requestOptions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainScript___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainScript
class CORDL_TYPE MainScript : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::MainScript___c;

using __c__DisplayClass3_0 = ::GlobalNamespace::MainScript___c__DisplayClass3_0;

/// @brief Field basePath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_basePath, put=__cordl_internal_set_basePath)) ::StringW  basePath;

/// @brief Field currentRequest, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRequest, put=__cordl_internal_set_currentRequest)) ::Proyecto26::RequestHelper*  currentRequest;

/// @brief Method AbortRequest, addr 0x16bf138, size 0x24, virtual false, abstract: false, final false
inline void AbortRequest() ;

/// @brief Method Delete, addr 0x16bf088, size 0xb0, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method DownloadFile, addr 0x16bf15c, size 0x24c, virtual false, abstract: false, final false
inline void DownloadFile() ;

/// @brief Method Get, addr 0x16be544, size 0x518, virtual false, abstract: false, final false
inline void Get() ;

/// @brief Method LogMessage, addr 0x16be4ec, size 0x58, virtual false, abstract: false, final false
inline void LogMessage(::StringW  title, ::StringW  message) ;

static inline ::GlobalNamespace::MainScript* New_ctor() ;

/// @brief Method Post, addr 0x16bea64, size 0x408, virtual false, abstract: false, final false
inline void Post() ;

/// @brief Method Put, addr 0x16bee6c, size 0x21c, virtual false, abstract: false, final false
inline void Put() ;

/// @brief Method <Delete>b__6_0, addr 0x16bf514, size 0xbc, virtual false, abstract: false, final false
inline void _Delete_b__6_0(::Proyecto26::RequestException*  err, ::Proyecto26::ResponseHelper*  res) ;

/// @brief Method <DownloadFile>b__8_0, addr 0x16bf5d0, size 0xc4, virtual false, abstract: false, final false
inline void _DownloadFile_b__8_0(::Proyecto26::ResponseHelper*  res) ;

/// @brief Method <DownloadFile>b__8_1, addr 0x16bf694, size 0x54, virtual false, abstract: false, final false
inline void _DownloadFile_b__8_1(::System::Exception*  err) ;

/// @brief Method <Post>b__4_0, addr 0x16bf3f8, size 0x54, virtual false, abstract: false, final false
inline void _Post_b__4_0(::Proyecto26::Models::Post*  res) ;

/// @brief Method <Post>b__4_1, addr 0x16bf44c, size 0x54, virtual false, abstract: false, final false
inline void _Post_b__4_1(::System::Exception*  err) ;

/// @brief Method <Put>b__5_0, addr 0x16bf4a0, size 0x74, virtual false, abstract: false, final false
inline void _Put_b__5_0(::Proyecto26::RequestException*  err, ::Proyecto26::ResponseHelper*  res, ::Proyecto26::Models::Post*  body) ;

constexpr ::StringW const& __cordl_internal_get_basePath() const;

constexpr ::StringW& __cordl_internal_get_basePath() ;

constexpr ::Proyecto26::RequestHelper* const& __cordl_internal_get_currentRequest() const;

constexpr ::Proyecto26::RequestHelper*& __cordl_internal_get_currentRequest() ;

constexpr void __cordl_internal_set_basePath(::StringW  value) ;

constexpr void __cordl_internal_set_currentRequest(::Proyecto26::RequestHelper*  value) ;

/// @brief Method .ctor, addr 0x16bf3a8, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainScript() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainScript", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainScript(MainScript && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainScript", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainScript(MainScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29};

/// @brief Field basePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___basePath;

/// @brief Field currentRequest, offset: 0x28, size: 0x8, def value: None
 ::Proyecto26::RequestHelper*  ___currentRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainScript, ___basePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainScript, ___currentRequest) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainScript, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainScript);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainScript*, "", "MainScript");
NEED_NO_BOX(::GlobalNamespace::MainScript___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainScript___c*, "", "MainScript/<>c");
NEED_NO_BOX(::GlobalNamespace::MainScript___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainScript___c__DisplayClass3_0*, "", "MainScript/<>c__DisplayClass3_0");

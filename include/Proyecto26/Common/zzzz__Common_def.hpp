#pragma once
// IWYU pragma private; include "Proyecto26/Common/Common.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
namespace Proyecto26::Common {
class Common__SendWebRequestWithOptions_d__4;
}
namespace Proyecto26 {
class RequestHelper;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Proyecto26::Common {
class Common;
}
namespace Proyecto26::Common {
class Common__SendWebRequestWithOptions_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::Common::Common);
MARK_REF_PTR_T(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Proyecto26::Common {
// Is value type: false
// CS Name: Proyecto26.Common.Common/<SendWebRequestWithOptions>d__4
class CORDL_TYPE Common__SendWebRequestWithOptions_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field options, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Proyecto26::RequestHelper*  options;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17fa278, size 0x290, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17fa508, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17fa510, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17fa548, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17fa274, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Proyecto26::RequestHelper* const& __cordl_internal_get_options() const;

constexpr ::Proyecto26::RequestHelper*& __cordl_internal_get_options() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_options(::Proyecto26::RequestHelper*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x17fa24c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Common__SendWebRequestWithOptions_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common__SendWebRequestWithOptions_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common__SendWebRequestWithOptions_d__4(Common__SendWebRequestWithOptions_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common__SendWebRequestWithOptions_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common__SendWebRequestWithOptions_d__4(Common__SendWebRequestWithOptions_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1743};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field options, offset: 0x20, size: 0x8, def value: None
 ::Proyecto26::RequestHelper*  ___options;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4, ___options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4, ___request) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4, 0x30>, "Size mismatch!");

} // namespace end def Proyecto26::Common
// Dependencies System.Object
namespace Proyecto26::Common {
// Is value type: false
// CS Name: Proyecto26.Common.Common
class CORDL_TYPE Common : public ::System::Object {
public:
// Declarations
using _SendWebRequestWithOptions_d__4 = ::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4;

/// @brief Method ConfigureWebRequestWithOptions, addr 0x17f9de8, size 0x464, virtual false, abstract: false, final false
static inline void ConfigureWebRequestWithOptions(::UnityEngine::Networking::UnityWebRequest*  request, ::ArrayW<uint8_t,::Array<uint8_t>*>  bodyRaw, ::StringW  contentType, ::Proyecto26::RequestHelper*  options) ;

/// @brief Method GetFormSectionsContentType, addr 0x17f9c44, size 0x1a4, virtual false, abstract: false, final false
static inline ::StringW GetFormSectionsContentType(::ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  bodyRaw, ::Proyecto26::RequestHelper*  options) ;

/// @brief Method SendWebRequestWithOptions, addr 0x17f8144, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* SendWebRequestWithOptions(::UnityEngine::Networking::UnityWebRequest*  request, ::Proyecto26::RequestHelper*  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Common() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common(Common && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common(Common const& ) = delete;

/// @brief Field CONTENT_TYPE_HEADER offset 0xffffffff size 0x8
static constexpr ::ConstString  CONTENT_TYPE_HEADER{u"Content-Type"};

/// @brief Field DEFAULT_CONTENT_TYPE offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_CONTENT_TYPE{u"application/json"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1744};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::Common::Common, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26::Common
NEED_NO_BOX(::Proyecto26::Common::Common);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::Common::Common*, "Proyecto26.Common", "Common");
NEED_NO_BOX(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::Common::Common__SendWebRequestWithOptions_d__4*, "Proyecto26.Common", "Common/<SendWebRequestWithOptions>d__4");

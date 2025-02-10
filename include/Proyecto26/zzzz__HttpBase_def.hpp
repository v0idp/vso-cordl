#pragma once
// IWYU pragma private; include "Proyecto26/HttpBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpBase)
namespace Proyecto26 {
class HttpBase__CreateRequestAndRetry_d__0;
}
namespace Proyecto26 {
template<typename TResponse>
class HttpBase___c__DisplayClass5_0_1;
}
namespace Proyecto26 {
template<typename TResponse>
class HttpBase___c__DisplayClass6_0_1;
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
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Proyecto26 {
class HttpBase;
}
namespace Proyecto26 {
class HttpBase__CreateRequestAndRetry_d__0;
}
namespace Proyecto26 {
template<typename TResponse>
class HttpBase___c__DisplayClass5_0_1;
}
namespace Proyecto26 {
template<typename TResponse>
class HttpBase___c__DisplayClass6_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::HttpBase);
MARK_REF_PTR_T(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0);
MARK_GEN_REF_PTR_T(::Proyecto26::HttpBase___c__DisplayClass5_0_1);
MARK_GEN_REF_PTR_T(::Proyecto26::HttpBase___c__DisplayClass6_0_1);
// Dependencies System.Object
namespace Proyecto26 {
// cpp template
template<typename TResponse>
// Is value type: false
// CS Name: Proyecto26.HttpBase/<>c__DisplayClass5_0`1<TResponse>
class CORDL_TYPE HttpBase___c__DisplayClass5_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,TResponse>*  callback;

/// @brief Field options, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Proyecto26::RequestHelper*  options;

static inline ::Proyecto26::HttpBase___c__DisplayClass5_0_1<TResponse>* New_ctor() ;

/// @brief Method <DefaultUnityWebRequest>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _DefaultUnityWebRequest_b__0(::Proyecto26::RequestException*  err, ::Proyecto26::ResponseHelper*  res) ;

constexpr ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,TResponse>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,TResponse>*& __cordl_internal_get_callback() ;

constexpr ::Proyecto26::RequestHelper* const& __cordl_internal_get_options() const;

constexpr ::Proyecto26::RequestHelper*& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_callback(::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,TResponse>*  value) ;

constexpr void __cordl_internal_set_options(::Proyecto26::RequestHelper*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpBase___c__DisplayClass5_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass5_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase___c__DisplayClass5_0_1(HttpBase___c__DisplayClass5_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass5_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase___c__DisplayClass5_0_1(HttpBase___c__DisplayClass5_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1731};

/// @brief Field options, offset: 0x10, size: 0x8, def value: None
 ::Proyecto26::RequestHelper*  ___options;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,TResponse>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Proyecto26
// Dependencies System.Object
namespace Proyecto26 {
// cpp template
template<typename TResponse>
// Is value type: false
// CS Name: Proyecto26.HttpBase/<>c__DisplayClass6_0`1<TResponse>
class CORDL_TYPE HttpBase___c__DisplayClass6_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<TResponse,::Array<TResponse>*>>*  callback;

/// @brief Field options, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Proyecto26::RequestHelper*  options;

static inline ::Proyecto26::HttpBase___c__DisplayClass6_0_1<TResponse>* New_ctor() ;

/// @brief Method <DefaultUnityWebRequest>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _DefaultUnityWebRequest_b__0(::Proyecto26::RequestException*  err, ::Proyecto26::ResponseHelper*  res) ;

constexpr ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<TResponse,::Array<TResponse>*>>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<TResponse,::Array<TResponse>*>>*& __cordl_internal_get_callback() ;

constexpr ::Proyecto26::RequestHelper* const& __cordl_internal_get_options() const;

constexpr ::Proyecto26::RequestHelper*& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_callback(::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<TResponse,::Array<TResponse>*>>*  value) ;

constexpr void __cordl_internal_set_options(::Proyecto26::RequestHelper*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpBase___c__DisplayClass6_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase___c__DisplayClass6_0_1(HttpBase___c__DisplayClass6_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass6_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase___c__DisplayClass6_0_1(HttpBase___c__DisplayClass6_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1732};

/// @brief Field options, offset: 0x10, size: 0x8, def value: None
 ::Proyecto26::RequestHelper*  ___options;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<TResponse,::Array<TResponse>*>>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Proyecto26
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.HttpBase/<CreateRequestAndRetry>d__0
class CORDL_TYPE HttpBase__CreateRequestAndRetry_d__0 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <request>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__3, put=__cordl_internal_set__request_5__3)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__3;

/// @brief Field <retries>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__retries_5__2, put=__cordl_internal_set__retries_5__2)) int32_t  _retries_5__2;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback;

/// @brief Field options, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Proyecto26::RequestHelper*  options;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17f7dc8, size 0x37c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Proyecto26::HttpBase__CreateRequestAndRetry_d__0* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17f832c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17f8334, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17f836c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17f7d9c, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__3() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__3() ;

constexpr int32_t const& __cordl_internal_get__retries_5__2() const;

constexpr int32_t& __cordl_internal_get__retries_5__2() ;

constexpr ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*& __cordl_internal_get_callback() ;

constexpr ::Proyecto26::RequestHelper* const& __cordl_internal_get_options() const;

constexpr ::Proyecto26::RequestHelper*& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__request_5__3(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retries_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  value) ;

constexpr void __cordl_internal_set_options(::Proyecto26::RequestHelper*  value) ;

/// @brief Method <>m__Finally1, addr 0x17f827c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method .ctor, addr 0x17f76c0, size 0x28, virtual false, abstract: false, final false
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
constexpr HttpBase__CreateRequestAndRetry_d__0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase__CreateRequestAndRetry_d__0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase__CreateRequestAndRetry_d__0(HttpBase__CreateRequestAndRetry_d__0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase__CreateRequestAndRetry_d__0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase__CreateRequestAndRetry_d__0(HttpBase__CreateRequestAndRetry_d__0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1733};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field options, offset: 0x20, size: 0x8, def value: None
 ::Proyecto26::RequestHelper*  ___options;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  ___callback;

/// @brief Field <retries>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  ____retries_5__2;

/// @brief Field <request>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, ___options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, ____retries_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, ____request_5__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Proyecto26::HttpBase__CreateRequestAndRetry_d__0, 0x40>, "Size mismatch!");

} // namespace end def Proyecto26
// Dependencies System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.HttpBase
class CORDL_TYPE HttpBase : public ::System::Object {
public:
// Declarations
using _CreateRequestAndRetry_d__0 = ::Proyecto26::HttpBase__CreateRequestAndRetry_d__0;

template<typename TResponse>
using __c__DisplayClass5_0_1 = ::Proyecto26::HttpBase___c__DisplayClass5_0_1<TResponse>;

template<typename TResponse>
using __c__DisplayClass6_0_1 = ::Proyecto26::HttpBase___c__DisplayClass6_0_1<TResponse>;

/// @brief Method CreateException, addr 0x17f7bec, size 0x108, virtual false, abstract: false, final false
static inline ::Proyecto26::RequestException* CreateException(::Proyecto26::RequestHelper*  options, ::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method CreateRequest, addr 0x17f76e8, size 0x118, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* CreateRequest(::Proyecto26::RequestHelper*  options) ;

/// @brief Method CreateRequestAndRetry, addr 0x17f7654, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* CreateRequestAndRetry(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method DebugLog, addr 0x17f7b58, size 0x94, virtual false, abstract: false, final false
static inline void DebugLog(bool  debugEnabled, ::System::Object*  message, bool  isError) ;

/// @brief Method DefaultUnityWebRequest, addr 0x17f7d98, size 0x4, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* DefaultUnityWebRequest(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method DefaultUnityWebRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResponse>
static inline ::System::Collections::IEnumerator* DefaultUnityWebRequest(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<TResponse,::Array<TResponse>*>>*  callback) ;

/// @brief Method DefaultUnityWebRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResponse>
static inline ::System::Collections::IEnumerator* DefaultUnityWebRequest(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,TResponse>*  callback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase(HttpBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase(HttpBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::HttpBase, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::HttpBase);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::HttpBase*, "Proyecto26", "HttpBase");
NEED_NO_BOX(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::HttpBase__CreateRequestAndRetry_d__0*, "Proyecto26", "HttpBase/<CreateRequestAndRetry>d__0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Proyecto26::HttpBase___c__DisplayClass5_0_1, "Proyecto26", "HttpBase/<>c__DisplayClass5_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Proyecto26::HttpBase___c__DisplayClass6_0_1, "Proyecto26", "HttpBase/<>c__DisplayClass6_0`1");

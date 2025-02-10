#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/CachingGetter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachingGetter_1)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class WaitForSeconds;
}
namespace Vuplex::WebView::Internal {
template<typename TResult>
class CachingGetter_1___invalidateCachePeriodically_d__6;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
template<typename TResult>
class CachingGetter_1;
}
namespace Vuplex::WebView::Internal {
template<typename TResult>
class CachingGetter_1___invalidateCachePeriodically_d__6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Vuplex::WebView::Internal::CachingGetter_1);
MARK_GEN_REF_PTR_T(::Vuplex::WebView::Internal::CachingGetter_1___invalidateCachePeriodically_d__6);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Vuplex::WebView::Internal {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Vuplex.WebView.Internal.CachingGetter`1/<_invalidateCachePeriodically>d__6<TResult>
class CORDL_TYPE CachingGetter_1___invalidateCachePeriodically_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Vuplex::WebView::Internal::CachingGetter_1<TResult>*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Vuplex::WebView::Internal::CachingGetter_1___invalidateCachePeriodically_d__6<TResult>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Vuplex::WebView::Internal::CachingGetter_1<TResult>* const& __cordl_internal_get___4__this() const;

constexpr ::Vuplex::WebView::Internal::CachingGetter_1<TResult>*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Vuplex::WebView::Internal::CachingGetter_1<TResult>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
constexpr CachingGetter_1___invalidateCachePeriodically_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachingGetter_1___invalidateCachePeriodically_d__6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachingGetter_1___invalidateCachePeriodically_d__6(CachingGetter_1___invalidateCachePeriodically_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachingGetter_1___invalidateCachePeriodically_d__6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachingGetter_1___invalidateCachePeriodically_d__6(CachingGetter_1___invalidateCachePeriodically_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{237};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Vuplex::WebView::Internal::CachingGetter_1<TResult>*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Vuplex.WebView.Internal.CachingGetter`1<TResult>
class CORDL_TYPE CachingGetter_1 : public ::System::Object {
public:
// Declarations
using __invalidateCachePeriodically_d__6 = ::Vuplex::WebView::Internal::CachingGetter_1___invalidateCachePeriodically_d__6<TResult>;

/// @brief Field _cachedValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedValue, put=__cordl_internal_set__cachedValue)) TResult  _cachedValue;

/// @brief Field _getterFunction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__getterFunction, put=__cordl_internal_set__getterFunction)) ::System::Func_1<TResult>*  _getterFunction;

/// @brief Field _valueNeedsToBeUpdated, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__valueNeedsToBeUpdated, put=__cordl_internal_set__valueNeedsToBeUpdated)) bool  _valueNeedsToBeUpdated;

/// @brief Field _waitForSeconds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitForSeconds, put=__cordl_internal_set__waitForSeconds)) ::UnityEngine::WaitForSeconds*  _waitForSeconds;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult GetValue() ;

static inline ::Vuplex::WebView::Internal::CachingGetter_1<TResult>* New_ctor(::System::Func_1<TResult>*  getterFunction, int32_t  cacheInvalidationPeriodSeconds, ::UnityEngine::MonoBehaviour*  monoBehaviourForCoroutine) ;

constexpr TResult const& __cordl_internal_get__cachedValue() const;

constexpr TResult& __cordl_internal_get__cachedValue() ;

constexpr ::System::Func_1<TResult>* const& __cordl_internal_get__getterFunction() const;

constexpr ::System::Func_1<TResult>*& __cordl_internal_get__getterFunction() ;

constexpr bool const& __cordl_internal_get__valueNeedsToBeUpdated() const;

constexpr bool& __cordl_internal_get__valueNeedsToBeUpdated() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__waitForSeconds() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__waitForSeconds() ;

constexpr void __cordl_internal_set__cachedValue(TResult  value) ;

constexpr void __cordl_internal_set__getterFunction(::System::Func_1<TResult>*  value) ;

constexpr void __cordl_internal_set__valueNeedsToBeUpdated(bool  value) ;

constexpr void __cordl_internal_set__waitForSeconds(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<TResult>*  getterFunction, int32_t  cacheInvalidationPeriodSeconds, ::UnityEngine::MonoBehaviour*  monoBehaviourForCoroutine) ;

/// @brief Method _invalidateCachePeriodically, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _invalidateCachePeriodically() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CachingGetter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachingGetter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachingGetter_1(CachingGetter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachingGetter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachingGetter_1(CachingGetter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{238};

/// @brief Field _getterFunction, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<TResult>*  ____getterFunction;

/// @brief Field _valueNeedsToBeUpdated, offset: 0x18, size: 0x1, def value: None
 bool  ____valueNeedsToBeUpdated;

/// @brief Field _cachedValue, offset: 0x20, size: 0x8, def value: None
 TResult  ____cachedValue;

/// @brief Field _waitForSeconds, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____waitForSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Vuplex::WebView::Internal::CachingGetter_1, "Vuplex.WebView.Internal", "CachingGetter`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Vuplex::WebView::Internal::CachingGetter_1___invalidateCachePeriodically_d__6, "Vuplex.WebView.Internal", "CachingGetter`1/<_invalidateCachePeriodically>d__6");

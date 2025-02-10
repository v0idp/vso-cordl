#pragma once
// IWYU pragma private; include "Firebase/Unity/UnitySynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySynchronizationContext)
namespace Firebase::Unity {
class SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0;
}
namespace Firebase::Unity {
class UnitySynchronizationContext_SynchronizationContextBehavoir;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__SendCoroutine_c__AnonStorey1;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__SendCoroutine_c__AnonStorey2;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__Send_c__AnonStorey3;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__Send_c__AnonStorey4;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__SignaledCoroutine_c__Iterator0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Firebase::Unity {
class SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0;
}
namespace Firebase::Unity {
class UnitySynchronizationContext;
}
namespace Firebase::Unity {
class UnitySynchronizationContext_SynchronizationContextBehavoir;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__SendCoroutine_c__AnonStorey1;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__SendCoroutine_c__AnonStorey2;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__Send_c__AnonStorey3;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__Send_c__AnonStorey4;
}
namespace Firebase::Unity {
class UnitySynchronizationContext__SignaledCoroutine_c__Iterator0;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey1);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey2);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4);
MARK_REF_PTR_T(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
class CORDL_TYPE SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0 : public ::System::Object {
public:
// Declarations
/// @brief Field $PC, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_$PC, put=__cordl_internal_set_$PC)) int32_t  $PC;

/// @brief Field $current, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_$current, put=__cordl_internal_set_$current)) ::System::Object*  $current;

/// @brief Field $disposing, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_$disposing, put=__cordl_internal_set_$disposing)) bool  $disposing;

/// @brief Field $locvar0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_$locvar0, put=__cordl_internal_set_$locvar0)) ::System::Object*  $locvar0;

/// @brief Field $this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>  $this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <entry>__0, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__entry___0, put=__cordl_internal_set__entry___0)) ::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*  _entry___0;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x19217fc, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x19215a4, size 0x248, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0* New_ctor() ;

/// @brief Method Reset, addr 0x1921810, size 0x38, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.Generic.IEnumerator<object>.get_Current, addr 0x19217ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x19217f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr int32_t const& __cordl_internal_get_$PC() const;

constexpr int32_t& __cordl_internal_get_$PC() ;

constexpr ::System::Object* const& __cordl_internal_get_$current() const;

constexpr ::System::Object*& __cordl_internal_get_$current() ;

constexpr bool const& __cordl_internal_get_$disposing() const;

constexpr bool& __cordl_internal_get_$disposing() ;

constexpr ::System::Object* const& __cordl_internal_get_$locvar0() const;

constexpr ::System::Object*& __cordl_internal_get_$locvar0() ;

constexpr ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir> const& __cordl_internal_get_$this() const;

constexpr ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>& __cordl_internal_get_$this() ;

constexpr ::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>* const& __cordl_internal_get__entry___0() const;

constexpr ::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*& __cordl_internal_get__entry___0() ;

constexpr void __cordl_internal_set_$PC(int32_t  value) ;

constexpr void __cordl_internal_set_$current(::System::Object*  value) ;

constexpr void __cordl_internal_set_$disposing(bool  value) ;

constexpr void __cordl_internal_set_$locvar0(::System::Object*  value) ;

constexpr void __cordl_internal_set_$this(::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>  value) ;

constexpr void __cordl_internal_set__entry___0(::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x192159c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0(SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0(SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12187};

/// @brief Field <entry>__0, offset: 0x10, size: 0x8, def value: None
 ::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*  ____entry___0;

/// @brief Field $locvar0, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___$locvar0;

/// @brief Field $this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>  ___$this;

/// @brief Field $current, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___$current;

/// @brief Field $disposing, offset: 0x30, size: 0x1, def value: None
 bool  ___$disposing;

/// @brief Field $PC, offset: 0x34, size: 0x4, def value: None
 int32_t  ___$PC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, ____entry___0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, ___$locvar0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, ___$this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, ___$current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, ___$disposing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, ___$PC) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0, 0x38>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies UnityEngine.MonoBehaviour
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
class CORDL_TYPE UnitySynchronizationContext_SynchronizationContextBehavoir : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_c__Iterator0 = ::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0;

 __declspec(property(get=get_CallbackQueue)) ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  CallbackQueue;

/// @brief Field callbackQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackQueue, put=__cordl_internal_set_callbackQueue)) ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  callbackQueue;

static inline ::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir* New_ctor() ;

/// @brief Method Start, addr 0x1921538, size 0x64, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>* const& __cordl_internal_get_callbackQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*& __cordl_internal_get_callbackQueue() ;

constexpr void __cordl_internal_set_callbackQueue(::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  value) ;

/// @brief Method .ctor, addr 0x1921530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CallbackQueue, addr 0x1920f64, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>* get_CallbackQueue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext_SynchronizationContextBehavoir() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext_SynchronizationContextBehavoir", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext_SynchronizationContextBehavoir(UnitySynchronizationContext_SynchronizationContextBehavoir && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext_SynchronizationContextBehavoir", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext_SynchronizationContextBehavoir(UnitySynchronizationContext_SynchronizationContextBehavoir const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12188};

/// @brief Field callbackQueue, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  ___callbackQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir, ___callbackQueue) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
class CORDL_TYPE UnitySynchronizationContext__SignaledCoroutine_c__Iterator0 : public ::System::Object {
public:
// Declarations
/// @brief Field $PC, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_$PC, put=__cordl_internal_set_$PC)) int32_t  $PC;

/// @brief Field $current, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_$current, put=__cordl_internal_set_$current)) ::System::Object*  $current;

/// @brief Field $disposing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_$disposing, put=__cordl_internal_set_$disposing)) bool  $disposing;

 __declspec(property(get=System_Collections_Generic_IEnumerator_object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field coroutine, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutine, put=__cordl_internal_set_coroutine)) ::System::Func_1<::System::Collections::IEnumerator*>*  coroutine;

/// @brief Field newSignal, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_newSignal, put=__cordl_internal_set_newSignal)) ::System::Threading::ManualResetEvent*  newSignal;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x19218fc, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x1921850, size 0x9c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0* New_ctor() ;

/// @brief Method Reset, addr 0x1921910, size 0x38, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.Generic.IEnumerator<object>.get_Current, addr 0x19218ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x19218f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr int32_t const& __cordl_internal_get_$PC() const;

constexpr int32_t& __cordl_internal_get_$PC() ;

constexpr ::System::Object* const& __cordl_internal_get_$current() const;

constexpr ::System::Object*& __cordl_internal_get_$current() ;

constexpr bool const& __cordl_internal_get_$disposing() const;

constexpr bool& __cordl_internal_get_$disposing() ;

constexpr ::System::Func_1<::System::Collections::IEnumerator*>* const& __cordl_internal_get_coroutine() const;

constexpr ::System::Func_1<::System::Collections::IEnumerator*>*& __cordl_internal_get_coroutine() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_newSignal() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_newSignal() ;

constexpr void __cordl_internal_set_$PC(int32_t  value) ;

constexpr void __cordl_internal_set_$current(::System::Object*  value) ;

constexpr void __cordl_internal_set_$disposing(bool  value) ;

constexpr void __cordl_internal_set_coroutine(::System::Func_1<::System::Collections::IEnumerator*>*  value) ;

constexpr void __cordl_internal_set_newSignal(::System::Threading::ManualResetEvent*  value) ;

/// @brief Method .ctor, addr 0x1921848, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext__SignaledCoroutine_c__Iterator0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__SignaledCoroutine_c__Iterator0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext__SignaledCoroutine_c__Iterator0(UnitySynchronizationContext__SignaledCoroutine_c__Iterator0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__SignaledCoroutine_c__Iterator0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext__SignaledCoroutine_c__Iterator0(UnitySynchronizationContext__SignaledCoroutine_c__Iterator0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12189};

/// @brief Field coroutine, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Collections::IEnumerator*>*  ___coroutine;

/// @brief Field newSignal, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___newSignal;

/// @brief Field $current, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___$current;

/// @brief Field $disposing, offset: 0x28, size: 0x1, def value: None
 bool  ___$disposing;

/// @brief Field $PC, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___$PC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0, ___coroutine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0, ___newSignal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0, ___$current) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0, ___$disposing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0, ___$PC) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
class CORDL_TYPE UnitySynchronizationContext__SendCoroutine_c__AnonStorey1 : public ::System::Object {
public:
// Declarations
static inline ::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey1* New_ctor() ;

/// @brief Method .ctor, addr 0x1921948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext__SendCoroutine_c__AnonStorey1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__SendCoroutine_c__AnonStorey1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext__SendCoroutine_c__AnonStorey1(UnitySynchronizationContext__SendCoroutine_c__AnonStorey1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__SendCoroutine_c__AnonStorey1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext__SendCoroutine_c__AnonStorey1(UnitySynchronizationContext__SendCoroutine_c__AnonStorey1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12190};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey1, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
class CORDL_TYPE UnitySynchronizationContext__SendCoroutine_c__AnonStorey2 : public ::System::Object {
public:
// Declarations
static inline ::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey2* New_ctor() ;

/// @brief Method .ctor, addr 0x1921950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext__SendCoroutine_c__AnonStorey2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__SendCoroutine_c__AnonStorey2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext__SendCoroutine_c__AnonStorey2(UnitySynchronizationContext__SendCoroutine_c__AnonStorey2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__SendCoroutine_c__AnonStorey2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext__SendCoroutine_c__AnonStorey2(UnitySynchronizationContext__SendCoroutine_c__AnonStorey2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey2, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
class CORDL_TYPE UnitySynchronizationContext__Send_c__AnonStorey3 : public ::System::Object {
public:
// Declarations
/// @brief Field d, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_d, put=__cordl_internal_set_d)) ::System::Threading::SendOrPostCallback*  d;

static inline ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3* New_ctor() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get_d() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get_d() ;

constexpr void __cordl_internal_set_d(::System::Threading::SendOrPostCallback*  value) ;

/// @brief Method .ctor, addr 0x1921488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext__Send_c__AnonStorey3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__Send_c__AnonStorey3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext__Send_c__AnonStorey3(UnitySynchronizationContext__Send_c__AnonStorey3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__Send_c__AnonStorey3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext__Send_c__AnonStorey3(UnitySynchronizationContext__Send_c__AnonStorey3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12192};

/// @brief Field d, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ___d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3, ___d) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
class CORDL_TYPE UnitySynchronizationContext__Send_c__AnonStorey4 : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__ref$3, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___f__ref$3, put=__cordl_internal_set___f__ref$3)) ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3*  __f__ref$3;

/// @brief Field newSignal, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_newSignal, put=__cordl_internal_set_newSignal)) ::System::Threading::ManualResetEvent*  newSignal;

static inline ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4* New_ctor() ;

constexpr ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3* const& __cordl_internal_get___f__ref$3() const;

constexpr ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3*& __cordl_internal_get___f__ref$3() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_newSignal() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_newSignal() ;

constexpr void __cordl_internal_set___f__ref$3(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3*  value) ;

constexpr void __cordl_internal_set_newSignal(::System::Threading::ManualResetEvent*  value) ;

/// @brief Method <>m__0, addr 0x1921958, size 0x104, virtual false, abstract: false, final false
inline void __m__0(::System::Object*  x) ;

/// @brief Method .ctor, addr 0x1921490, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext__Send_c__AnonStorey4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__Send_c__AnonStorey4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext__Send_c__AnonStorey4(UnitySynchronizationContext__Send_c__AnonStorey4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext__Send_c__AnonStorey4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext__Send_c__AnonStorey4(UnitySynchronizationContext__Send_c__AnonStorey4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12193};

/// @brief Field newSignal, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___newSignal;

/// @brief Field <>f__ref$3, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3*  _____f__ref$3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4, ___newSignal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4, _____f__ref$3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Unity
// Dependencies System.Threading.SynchronizationContext
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnitySynchronizationContext
class CORDL_TYPE UnitySynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
// Declarations
using SynchronizationContextBehavoir = ::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir;

using _SendCoroutine_c__AnonStorey1 = ::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey1;

using _SendCoroutine_c__AnonStorey2 = ::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey2;

using _Send_c__AnonStorey3 = ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3;

using _Send_c__AnonStorey4 = ::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4;

using _SignaledCoroutine_c__Iterator0 = ::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::Unity::UnitySynchronizationContext*  _instance;

/// @brief Field behavior, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_behavior, put=__cordl_internal_set_behavior)) ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>  behavior;

/// @brief Field mainThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_mainThreadId, put=__cordl_internal_set_mainThreadId)) int32_t  mainThreadId;

/// @brief Field queue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  queue;

/// @brief Field signalDictionary, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_signalDictionary, put=setStaticF_signalDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Threading::ManualResetEvent*>*  signalDictionary;

/// @brief Method Create, addr 0x191f5ec, size 0x8c, virtual false, abstract: false, final false
static inline void Create(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method Destroy, addr 0x191fee4, size 0x58, virtual false, abstract: false, final false
static inline void Destroy() ;

/// @brief Method GetThreadEvent, addr 0x1920fdc, size 0x210, virtual false, abstract: false, final false
inline ::System::Threading::ManualResetEvent* GetThreadEvent() ;

static inline ::Firebase::Unity::UnitySynchronizationContext* New_ctor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method Post, addr 0x19211ec, size 0x13c, virtual true, abstract: false, final false
inline void Post(::System::Threading::SendOrPostCallback*  d, ::System::Object*  state) ;

/// @brief Method Send, addr 0x1921328, size 0x160, virtual true, abstract: false, final false
inline void Send(::System::Threading::SendOrPostCallback*  d, ::System::Object*  state) ;

constexpr ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir> const& __cordl_internal_get_behavior() const;

constexpr ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>& __cordl_internal_get_behavior() ;

constexpr int32_t const& __cordl_internal_get_mainThreadId() const;

constexpr int32_t& __cordl_internal_get_mainThreadId() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*& __cordl_internal_get_queue() ;

constexpr void __cordl_internal_set_behavior(::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>  value) ;

constexpr void __cordl_internal_set_mainThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  value) ;

/// @brief Method .ctor, addr 0x1920ed8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  gameObject) ;

static inline ::Firebase::Unity::UnitySynchronizationContext* getStaticF__instance() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Threading::ManualResetEvent*>* getStaticF_signalDictionary() ;

static inline void setStaticF__instance(::Firebase::Unity::UnitySynchronizationContext*  value) ;

static inline void setStaticF_signalDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::System::Threading::ManualResetEvent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext(UnitySynchronizationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext(UnitySynchronizationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12194};

/// @brief Field queue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*,::System::Object*>*>*  ___queue;

/// @brief Field behavior, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir>  ___behavior;

/// @brief Field mainThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___mainThreadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext, ___queue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext, ___behavior) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Unity::UnitySynchronizationContext, ___mainThreadId) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnitySynchronizationContext, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Unity
NEED_NO_BOX(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::SynchronizationContextBehavoir_UnitySynchronizationContext__Start_c__Iterator0*, "Firebase.Unity", "UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext*, "Firebase.Unity", "UnitySynchronizationContext");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext_SynchronizationContextBehavoir*, "Firebase.Unity", "UnitySynchronizationContext/SynchronizationContextBehavoir");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey1*, "Firebase.Unity", "UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext__SendCoroutine_c__AnonStorey2*, "Firebase.Unity", "UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey3*, "Firebase.Unity", "UnitySynchronizationContext/<Send>c__AnonStorey3");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext__Send_c__AnonStorey4*, "Firebase.Unity", "UnitySynchronizationContext/<Send>c__AnonStorey4");
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext__SignaledCoroutine_c__Iterator0*, "Firebase.Unity", "UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0");

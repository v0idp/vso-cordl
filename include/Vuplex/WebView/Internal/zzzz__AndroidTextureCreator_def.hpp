#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidTextureCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidTextureCreator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
namespace Vuplex::WebView::Internal {
struct AndroidTextureCreator_TextureCreatorInvocation;
}
namespace Vuplex::WebView::Internal {
class AndroidTextureCreator___c__DisplayClass10_0;
}
namespace Vuplex::WebView::Internal {
class AndroidTextureCreator___callPluginOncePerFrame_d__9;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidTextureCreator;
}
namespace Vuplex::WebView::Internal {
class AndroidTextureCreator___c__DisplayClass10_0;
}
namespace Vuplex::WebView::Internal {
class AndroidTextureCreator___callPluginOncePerFrame_d__9;
}
namespace Vuplex::WebView::Internal {
struct AndroidTextureCreator_TextureCreatorInvocation;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidTextureCreator);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9);
MARK_VAL_T(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation);
// Dependencies 
namespace Vuplex::WebView::Internal {
// Is value type: true
// CS Name: Vuplex.WebView.Internal.AndroidTextureCreator/TextureCreatorInvocation
struct CORDL_TYPE AndroidTextureCreator_TextureCreatorInvocation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AndroidTextureCreator_TextureCreatorInvocation() ;

// Ctor Parameters [CppParam { name: "_cordl_ID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Callback", ty: "::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*", modifiers: "", def_value: None }]
constexpr AndroidTextureCreator_TextureCreatorInvocation(int32_t  _cordl_ID, int32_t  Width, int32_t  Height, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*  Callback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ID, offset: 0x0, size: 0x4, def value: None
 int32_t  _cordl_ID;

/// @brief Field Width, offset: 0x4, size: 0x4, def value: None
 int32_t  Width;

/// @brief Field Height, offset: 0x8, size: 0x4, def value: None
 int32_t  Height;

/// @brief Field Callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*  Callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation, _cordl_ID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation, Width) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation, Height) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation, Callback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidTextureCreator/<>c__DisplayClass10_0
class CORDL_TYPE AndroidTextureCreator___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field invocationID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_invocationID, put=__cordl_internal_set_invocationID)) int32_t  invocationID;

static inline ::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <HandleTextureCreated>b__0, addr 0x16e70f4, size 0x14, virtual false, abstract: false, final false
inline bool _HandleTextureCreated_b__0(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation  i) ;

constexpr int32_t const& __cordl_internal_get_invocationID() const;

constexpr int32_t& __cordl_internal_get_invocationID() ;

constexpr void __cordl_internal_set_invocationID(int32_t  value) ;

/// @brief Method .ctor, addr 0x16e6f74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidTextureCreator___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidTextureCreator___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidTextureCreator___c__DisplayClass10_0(AndroidTextureCreator___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidTextureCreator___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidTextureCreator___c__DisplayClass10_0(AndroidTextureCreator___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{220};

/// @brief Field invocationID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___invocationID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0, ___invocationID) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidTextureCreator/<_callPluginOncePerFrame>d__9
class CORDL_TYPE AndroidTextureCreator___callPluginOncePerFrame_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16e710c, size 0x1e4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16e72f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16e72f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16e7330, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16e7108, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  value) ;

/// @brief Method .ctor, addr 0x16e6d4c, size 0x28, virtual false, abstract: false, final false
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
constexpr AndroidTextureCreator___callPluginOncePerFrame_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidTextureCreator___callPluginOncePerFrame_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidTextureCreator___callPluginOncePerFrame_d__9(AndroidTextureCreator___callPluginOncePerFrame_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidTextureCreator___callPluginOncePerFrame_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidTextureCreator___callPluginOncePerFrame_d__9(AndroidTextureCreator___callPluginOncePerFrame_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{221};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidTextureCreator
class CORDL_TYPE AndroidTextureCreator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TextureCreatorInvocation = ::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation;

using __c__DisplayClass10_0 = ::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0;

using __callPluginOncePerFrame_d__9 = ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  _instance;

/// @brief Field _invocationIDsToTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__invocationIDsToTrigger, put=__cordl_internal_set__invocationIDsToTrigger)) ::System::Collections::Generic::List_1<int32_t>*  _invocationIDsToTrigger;

/// @brief Field _nextInvocationID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextInvocationID, put=__cordl_internal_set__nextInvocationID)) int32_t  _nextInvocationID;

/// @brief Field _pendingInvocations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingInvocations, put=__cordl_internal_set__pendingInvocations)) ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>*  _pendingInvocations;

/// @brief Field _waitForEndOfFrame, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitForEndOfFrame, put=__cordl_internal_set__waitForEndOfFrame)) ::UnityEngine::WaitForEndOfFrame*  _waitForEndOfFrame;

/// @brief Method CreateTexture, addr 0x16e69e4, size 0x308, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* CreateTexture(int32_t  width, int32_t  height) ;

/// @brief Method HandleTextureCreated, addr 0x16e6d74, size 0x200, virtual false, abstract: false, final false
inline void HandleTextureCreated(::StringW  parameterString) ;

static inline ::Vuplex::WebView::Internal::AndroidTextureCreator* New_ctor() ;

/// @brief Method Start, addr 0x16e6f7c, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method WebView_getCreateTextureFunction, addr 0x16e6f9c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr WebView_getCreateTextureFunction() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__invocationIDsToTrigger() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__invocationIDsToTrigger() ;

constexpr int32_t const& __cordl_internal_get__nextInvocationID() const;

constexpr int32_t& __cordl_internal_get__nextInvocationID() ;

constexpr ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>* const& __cordl_internal_get__pendingInvocations() const;

constexpr ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>*& __cordl_internal_get__pendingInvocations() ;

constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get__waitForEndOfFrame() const;

constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__waitForEndOfFrame() ;

constexpr void __cordl_internal_set__invocationIDsToTrigger(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__nextInvocationID(int32_t  value) ;

constexpr void __cordl_internal_set__pendingInvocations(::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>*  value) ;

constexpr void __cordl_internal_set__waitForEndOfFrame(::UnityEngine::WaitForEndOfFrame*  value) ;

/// @brief Method _callPluginOncePerFrame, addr 0x16e6cec, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _callPluginOncePerFrame() ;

/// @brief Method .ctor, addr 0x16e7004, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x16e68ac, size 0x138, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidTextureCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidTextureCreator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidTextureCreator(AndroidTextureCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidTextureCreator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidTextureCreator(AndroidTextureCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{222};

/// @brief Field _invocationIDsToTrigger, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____invocationIDsToTrigger;

/// @brief Field _nextInvocationID, offset: 0x28, size: 0x4, def value: None
 int32_t  ____nextInvocationID;

/// @brief Field _pendingInvocations, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>*  ____pendingInvocations;

/// @brief Field _waitForEndOfFrame, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::WaitForEndOfFrame*  ____waitForEndOfFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator, ____invocationIDsToTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator, ____nextInvocationID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator, ____pendingInvocations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidTextureCreator, ____waitForEndOfFrame) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidTextureCreator, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidTextureCreator);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidTextureCreator*, "Vuplex.WebView.Internal", "AndroidTextureCreator");
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0*, "Vuplex.WebView.Internal", "AndroidTextureCreator/<>c__DisplayClass10_0");
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*, "Vuplex.WebView.Internal", "AndroidTextureCreator/<_callPluginOncePerFrame>d__9");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation, "Vuplex.WebView.Internal", "AndroidTextureCreator/TextureCreatorInvocation");

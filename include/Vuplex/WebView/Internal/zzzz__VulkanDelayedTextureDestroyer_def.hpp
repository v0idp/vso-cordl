#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/VulkanDelayedTextureDestroyer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VulkanDelayedTextureDestroyer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
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
class WaitForSeconds;
}
namespace Vuplex::WebView::Internal {
class VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class VulkanDelayedTextureDestroyer;
}
namespace Vuplex::WebView::Internal {
class VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.VulkanDelayedTextureDestroyer/<_destroyTexturesPeriodically>d__8
class CORDL_TYPE VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17c3028, size 0x208, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17c3230, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17c3238, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17c3270, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17c3024, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer>  value) ;

/// @brief Method .ctor, addr 0x17c2eb0, size 0x28, virtual false, abstract: false, final false
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
constexpr VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8(VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8(VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{263};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.VulkanDelayedTextureDestroyer
class CORDL_TYPE VulkanDelayedTextureDestroyer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __destroyTexturesPeriodically_d__8 = ::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8;

/// @brief Field _destroyVulkanTextureFunction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__destroyVulkanTextureFunction, put=__cordl_internal_set__destroyVulkanTextureFunction)) ::System::Action_1<::System::IntPtr>*  _destroyVulkanTextureFunction;

/// @brief Field _indexOfTextureListActiveForDiscarding, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__indexOfTextureListActiveForDiscarding, put=__cordl_internal_set__indexOfTextureListActiveForDiscarding)) int32_t  _indexOfTextureListActiveForDiscarding;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer>  _instance;

/// @brief Field _textureLists, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureLists, put=__cordl_internal_set__textureLists)) ::ArrayW<::System::Collections::Generic::List_1<::System::IntPtr>*,::Array<::System::Collections::Generic::List_1<::System::IntPtr>*>*>  _textureLists;

/// @brief Field _waitShortDelay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitShortDelay, put=__cordl_internal_set__waitShortDelay)) ::UnityEngine::WaitForSeconds*  _waitShortDelay;

/// @brief Method DestroyTexture, addr 0x17c2d6c, size 0xc4, virtual false, abstract: false, final false
inline void DestroyTexture(::System::IntPtr  nativeTexture) ;

/// @brief Method GetInstance, addr 0x17c2c24, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer> GetInstance(::System::Action_1<::System::IntPtr>*  destroyVulkanTextureFunction) ;

static inline ::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer* New_ctor() ;

/// @brief Method OnEnable, addr 0x17c2e30, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Action_1<::System::IntPtr>* const& __cordl_internal_get__destroyVulkanTextureFunction() const;

constexpr ::System::Action_1<::System::IntPtr>*& __cordl_internal_get__destroyVulkanTextureFunction() ;

constexpr int32_t const& __cordl_internal_get__indexOfTextureListActiveForDiscarding() const;

constexpr int32_t& __cordl_internal_get__indexOfTextureListActiveForDiscarding() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::System::IntPtr>*,::Array<::System::Collections::Generic::List_1<::System::IntPtr>*>*> const& __cordl_internal_get__textureLists() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::System::IntPtr>*,::Array<::System::Collections::Generic::List_1<::System::IntPtr>*>*>& __cordl_internal_get__textureLists() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__waitShortDelay() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__waitShortDelay() ;

constexpr void __cordl_internal_set__destroyVulkanTextureFunction(::System::Action_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__indexOfTextureListActiveForDiscarding(int32_t  value) ;

constexpr void __cordl_internal_set__textureLists(::ArrayW<::System::Collections::Generic::List_1<::System::IntPtr>*,::Array<::System::Collections::Generic::List_1<::System::IntPtr>*>*>  value) ;

constexpr void __cordl_internal_set__waitShortDelay(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0x17c2ed8, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _destroyTexturesPeriodically, addr 0x17c2e50, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _destroyTexturesPeriodically() ;

static inline ::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer> getStaticF__instance() ;

static inline void setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VulkanDelayedTextureDestroyer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VulkanDelayedTextureDestroyer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VulkanDelayedTextureDestroyer(VulkanDelayedTextureDestroyer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VulkanDelayedTextureDestroyer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VulkanDelayedTextureDestroyer(VulkanDelayedTextureDestroyer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{264};

/// @brief Field _destroyVulkanTextureFunction, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::IntPtr>*  ____destroyVulkanTextureFunction;

/// @brief Field _indexOfTextureListActiveForDiscarding, offset: 0x28, size: 0x4, def value: None
 int32_t  ____indexOfTextureListActiveForDiscarding;

/// @brief Field _textureLists, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::System::IntPtr>*,::Array<::System::Collections::Generic::List_1<::System::IntPtr>*>*>  ____textureLists;

/// @brief Field _waitShortDelay, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____waitShortDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer, ____destroyVulkanTextureFunction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer, ____indexOfTextureListActiveForDiscarding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer, ____textureLists) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer, ____waitShortDelay) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer*, "Vuplex.WebView.Internal", "VulkanDelayedTextureDestroyer");
NEED_NO_BOX(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::VulkanDelayedTextureDestroyer___destroyTexturesPeriodically_d__8*, "Vuplex.WebView.Internal", "VulkanDelayedTextureDestroyer/<_destroyTexturesPeriodically>d__8");

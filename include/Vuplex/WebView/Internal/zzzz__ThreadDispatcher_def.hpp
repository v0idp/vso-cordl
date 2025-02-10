#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/ThreadDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadDispatcher)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class ThreadDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::ThreadDispatcher);
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.ThreadDispatcher
class CORDL_TYPE ThreadDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _actions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__actions, put=setStaticF__actions)) ::System::Collections::Generic::List_1<::System::Action*>*  _actions;

/// @brief Field _backlog, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__backlog, put=setStaticF__backlog)) ::System::Collections::Generic::List_1<::System::Action*>*  _backlog;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher>  _instance;

/// @brief Field _mainThreadId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__mainThreadId, put=setStaticF__mainThreadId)) int32_t  _mainThreadId;

/// @brief Field _queued, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__queued, put=setStaticF__queued)) bool  _queued;

static inline ::Vuplex::WebView::Internal::ThreadDispatcher* New_ctor() ;

/// @brief Method RunOnMainThread, addr 0x17c1fdc, size 0x1cc, virtual false, abstract: false, final false
static inline void RunOnMainThread(::System::Action*  action) ;

/// @brief Method Update, addr 0x17c2320, size 0x3f4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x17c2714, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _initialize, addr 0x17c21a8, size 0x178, virtual false, abstract: false, final false
static inline void _initialize() ;

static inline ::System::Collections::Generic::List_1<::System::Action*>* getStaticF__actions() ;

static inline ::System::Collections::Generic::List_1<::System::Action*>* getStaticF__backlog() ;

static inline ::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher> getStaticF__instance() ;

static inline int32_t getStaticF__mainThreadId() ;

static inline bool getStaticF__queued() ;

/// @brief Method get_CurrentlyOnMainThread, addr 0x17c1f34, size 0xa8, virtual false, abstract: false, final false
static inline bool get_CurrentlyOnMainThread() ;

static inline void setStaticF__actions(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

static inline void setStaticF__backlog(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

static inline void setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher>  value) ;

static inline void setStaticF__mainThreadId(int32_t  value) ;

static inline void setStaticF__queued(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadDispatcher(ThreadDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadDispatcher(ThreadDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::ThreadDispatcher, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::ThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::ThreadDispatcher*, "Vuplex.WebView.Internal", "ThreadDispatcher");

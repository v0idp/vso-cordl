#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/ThreadDispatcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__ThreadDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::ThreadDispatcher.get_CurrentlyOnMainThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Vuplex::WebView::Internal::ThreadDispatcher::get_CurrentlyOnMainThread)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17c1f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "get_CurrentlyOnMainThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::ThreadDispatcher.RunOnMainThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::Vuplex::WebView::Internal::ThreadDispatcher::RunOnMainThread)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x17c1fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "RunOnMainThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::ThreadDispatcher._initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Vuplex::WebView::Internal::ThreadDispatcher::_initialize)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x17c21a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "_initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::ThreadDispatcher.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::ThreadDispatcher::*)()>(&::Vuplex::WebView::Internal::ThreadDispatcher::Update)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x17c2320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::ThreadDispatcher._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::ThreadDispatcher::*)()>(&::Vuplex::WebView::Internal::ThreadDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c2714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::ThreadDispatcher::setStaticF__actions(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "_actions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>(std::forward<::System::Collections::Generic::List_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action*>* Vuplex::WebView::Internal::ThreadDispatcher::getStaticF__actions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "_actions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>();
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::setStaticF__backlog(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "_backlog", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>(std::forward<::System::Collections::Generic::List_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action*>* Vuplex::WebView::Internal::ThreadDispatcher::getStaticF__backlog()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "_backlog", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>();
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher>  value)  {
::cordl_internals::setStaticField<::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>(std::forward<::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher>>(value));
}
inline ::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher> Vuplex::WebView::Internal::ThreadDispatcher::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Vuplex::WebView::Internal::ThreadDispatcher>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>();
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::setStaticF__mainThreadId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_mainThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>(std::forward<int32_t>(value));
}
inline int32_t Vuplex::WebView::Internal::ThreadDispatcher::getStaticF__mainThreadId()  {
return ::cordl_internals::getStaticField<int32_t, "_mainThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>();
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::setStaticF__queued(bool  value)  {
::cordl_internals::setStaticField<bool, "_queued", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>(std::forward<bool>(value));
}
inline bool Vuplex::WebView::Internal::ThreadDispatcher::getStaticF__queued()  {
return ::cordl_internals::getStaticField<bool, "_queued", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get>();
}
inline bool Vuplex::WebView::Internal::ThreadDispatcher::get_CurrentlyOnMainThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "get_CurrentlyOnMainThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::RunOnMainThread(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "RunOnMainThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::_initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "_initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::ThreadDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ThreadDispatcher*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::ThreadDispatcher* Vuplex::WebView::Internal::ThreadDispatcher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::ThreadDispatcher*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::ThreadDispatcher::ThreadDispatcher()   {
}

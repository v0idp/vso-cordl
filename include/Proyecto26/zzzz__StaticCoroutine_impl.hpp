#pragma once
// IWYU pragma private; include "Proyecto26/StaticCoroutine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Proyecto26/zzzz__StaticCoroutine_def.hpp"
#include "Proyecto26/zzzz__StaticCoroutine_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Proyecto26::StaticCoroutine_CoroutineHolder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Proyecto26::StaticCoroutine_CoroutineHolder::*)()>(&::Proyecto26::StaticCoroutine_CoroutineHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f8c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine_CoroutineHolder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Proyecto26::StaticCoroutine_CoroutineHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine_CoroutineHolder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Proyecto26::StaticCoroutine_CoroutineHolder* Proyecto26::StaticCoroutine_CoroutineHolder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Proyecto26::StaticCoroutine_CoroutineHolder*>());
}
// Ctor Parameters []
constexpr ::Proyecto26::StaticCoroutine_CoroutineHolder::StaticCoroutine_CoroutineHolder()   {
}
//  Writing Method size for method: ::Proyecto26::StaticCoroutine.get_Runner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder> (*)()>(&::Proyecto26::StaticCoroutine::get_Runner)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17f8b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine*>::get(),
                        "get_Runner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Proyecto26::StaticCoroutine.StartCoroutine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (*)(::System::Collections::IEnumerator*)>(&::Proyecto26::StaticCoroutine::StartCoroutine)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17f8c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine*>::get(),
                        "StartCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Proyecto26::StaticCoroutine::setStaticF__runner(::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>  value)  {
::cordl_internals::setStaticField<::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>, "_runner", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine*>::get>(std::forward<::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>>(value));
}
inline ::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder> Proyecto26::StaticCoroutine::getStaticF__runner()  {
return ::cordl_internals::getStaticField<::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>, "_runner", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine*>::get>();
}
inline ::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder> Proyecto26::StaticCoroutine::get_Runner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine*>::get(),
                        "get_Runner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Coroutine* Proyecto26::StaticCoroutine::StartCoroutine(::System::Collections::IEnumerator*  coroutine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::StaticCoroutine*>::get(),
                        "StartCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*, false>(nullptr, ___internal_method, coroutine);
}
// Ctor Parameters []
constexpr ::Proyecto26::StaticCoroutine::StaticCoroutine()   {
}

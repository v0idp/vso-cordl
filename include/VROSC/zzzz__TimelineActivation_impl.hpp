#pragma once
// IWYU pragma private; include "VROSC/TimelineActivation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TimelineActivation_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::VROSC::TimelineActivation.Activate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineActivation::*)(bool)>(&::VROSC::TimelineActivation::Activate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1770e18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineActivation.OnActivateStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineActivation::*)()>(&::VROSC::TimelineActivation::OnActivateStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1770f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineActivation.OnDeactivateStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineActivation::*)()>(&::VROSC::TimelineActivation::OnDeactivateStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1770f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineActivation.EditorUnloadDirector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineActivation::*)()>(&::VROSC::TimelineActivation::EditorUnloadDirector)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1770f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                        "EditorUnloadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineActivation.EditorLoadDirector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineActivation::*)(bool)>(&::VROSC::TimelineActivation::EditorLoadDirector)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1770fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                        "EditorLoadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineActivation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineActivation::*)()>(&::VROSC::TimelineActivation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177105c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& VROSC::TimelineActivation::__cordl_internal_get__director()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____director;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& VROSC::TimelineActivation::__cordl_internal_get__director() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____director;
}
constexpr void VROSC::TimelineActivation::__cordl_internal_set__director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____director)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& VROSC::TimelineActivation::__cordl_internal_get__enterTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterTimeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& VROSC::TimelineActivation::__cordl_internal_get__enterTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterTimeline;
}
constexpr void VROSC::TimelineActivation::__cordl_internal_set__enterTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enterTimeline)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& VROSC::TimelineActivation::__cordl_internal_get__exitTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitTimeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& VROSC::TimelineActivation::__cordl_internal_get__exitTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitTimeline;
}
constexpr void VROSC::TimelineActivation::__cordl_internal_set__exitTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exitTimeline)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TimelineActivation::__cordl_internal_get__stopBeforePlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopBeforePlay;
}
constexpr bool const& VROSC::TimelineActivation::__cordl_internal_get__stopBeforePlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopBeforePlay;
}
constexpr void VROSC::TimelineActivation::__cordl_internal_set__stopBeforePlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopBeforePlay = value;
}
inline void VROSC::TimelineActivation::Activate(bool  shouldBeActive)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeActive);
}
inline void VROSC::TimelineActivation::OnActivateStart()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimelineActivation::OnDeactivateStart()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimelineActivation::EditorUnloadDirector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                        "EditorUnloadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimelineActivation::EditorLoadDirector(bool  enter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                        "EditorLoadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enter);
}
inline void VROSC::TimelineActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineActivation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TimelineActivation* VROSC::TimelineActivation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TimelineActivation*>());
}
// Ctor Parameters []
constexpr ::VROSC::TimelineActivation::TimelineActivation()   {
}

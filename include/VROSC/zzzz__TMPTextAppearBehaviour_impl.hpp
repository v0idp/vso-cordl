#pragma once
// IWYU pragma private; include "VROSC/TMPTextAppearBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__TMPTextAppearBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::VROSC::TMPTextAppearBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TMPTextAppearBehaviour::*)(::TMPro::TextMeshPro*)>(&::VROSC::TMPTextAppearBehaviour::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176fbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TMPTextAppearBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TMPTextAppearBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::TMPTextAppearBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x176fbcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TMPTextAppearBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TMPTextAppearBehaviour::*)()>(&::VROSC::TMPTextAppearBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x176fc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::TMPTextAppearBehaviour::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::TMPTextAppearBehaviour::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::TMPTextAppearBehaviour::__cordl_internal_set__target(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::TMPTextAppearBehaviour::__cordl_internal_get__visibleColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibleColor;
}
constexpr ::UnityEngine::Color const& VROSC::TMPTextAppearBehaviour::__cordl_internal_get__visibleColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibleColor;
}
constexpr void VROSC::TMPTextAppearBehaviour::__cordl_internal_set__visibleColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visibleColor = value;
}
constexpr float_t& VROSC::TMPTextAppearBehaviour::__cordl_internal_get_Appear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Appear;
}
constexpr float_t const& VROSC::TMPTextAppearBehaviour::__cordl_internal_get_Appear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Appear;
}
constexpr void VROSC::TMPTextAppearBehaviour::__cordl_internal_set_Appear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Appear = value;
}
inline void VROSC::TMPTextAppearBehaviour::Setup(::TMPro::TextMeshPro*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void VROSC::TMPTextAppearBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::TMPTextAppearBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TMPTextAppearBehaviour* VROSC::TMPTextAppearBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TMPTextAppearBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::TMPTextAppearBehaviour::TMPTextAppearBehaviour()   {
}

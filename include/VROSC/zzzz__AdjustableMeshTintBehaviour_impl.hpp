#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshTintBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__AnimatedAppear_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshTintBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshTintBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshTintBehaviour::*)(::VROSC::AdjustableMesh*, ::VROSC::AnimatedAppear_Mode)>(&::VROSC::AdjustableMeshTintBehaviour::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x176f9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshTintBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshTintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::AdjustableMeshTintBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x176f9dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshTintBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshTintBehaviour::*)()>(&::VROSC::AdjustableMeshTintBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176fa88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::AdjustableMeshTintBehaviour::__cordl_internal_set__target(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AnimatedAppear_Mode& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::VROSC::AnimatedAppear_Mode const& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void VROSC::AdjustableMeshTintBehaviour::__cordl_internal_set__mode(::VROSC::AnimatedAppear_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr ::UnityEngine::Color& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get__tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tintColor;
}
constexpr ::UnityEngine::Color const& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get__tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tintColor;
}
constexpr void VROSC::AdjustableMeshTintBehaviour::__cordl_internal_set__tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tintColor = value;
}
constexpr float_t& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get_Tint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tint;
}
constexpr float_t const& VROSC::AdjustableMeshTintBehaviour::__cordl_internal_get_Tint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tint;
}
constexpr void VROSC::AdjustableMeshTintBehaviour::__cordl_internal_set_Tint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tint = value;
}
inline void VROSC::AdjustableMeshTintBehaviour::Setup(::VROSC::AdjustableMesh*  target, ::VROSC::AnimatedAppear_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, mode);
}
inline void VROSC::AdjustableMeshTintBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::AdjustableMeshTintBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AdjustableMeshTintBehaviour* VROSC::AdjustableMeshTintBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshTintBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshTintBehaviour::AdjustableMeshTintBehaviour()   {
}

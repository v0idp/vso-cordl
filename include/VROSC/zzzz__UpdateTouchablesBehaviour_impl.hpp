#pragma once
// IWYU pragma private; include "VROSC/UpdateTouchablesBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__UpdateTouchablesBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__TouchableObjectsController_def.hpp"
//  Writing Method size for method: ::VROSC::UpdateTouchablesBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UpdateTouchablesBehaviour::*)(::VROSC::TouchableObjectsController*)>(&::VROSC::UpdateTouchablesBehaviour::Setup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1768524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TouchableObjectsController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UpdateTouchablesBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UpdateTouchablesBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::UpdateTouchablesBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1768544;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UpdateTouchablesBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UpdateTouchablesBehaviour::*)()>(&::VROSC::UpdateTouchablesBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1768558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::TouchableObjectsController>& VROSC::UpdateTouchablesBehaviour::__cordl_internal_get__touchables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr ::UnityW<::VROSC::TouchableObjectsController> const& VROSC::UpdateTouchablesBehaviour::__cordl_internal_get__touchables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr void VROSC::UpdateTouchablesBehaviour::__cordl_internal_set__touchables(::UnityW<::VROSC::TouchableObjectsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____touchables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UpdateTouchablesBehaviour::Setup(::VROSC::TouchableObjectsController*  touchables)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TouchableObjectsController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, touchables);
}
inline void VROSC::UpdateTouchablesBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::UpdateTouchablesBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UpdateTouchablesBehaviour* VROSC::UpdateTouchablesBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UpdateTouchablesBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::UpdateTouchablesBehaviour::UpdateTouchablesBehaviour()   {
}

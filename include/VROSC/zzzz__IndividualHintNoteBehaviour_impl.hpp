#pragma once
// IWYU pragma private; include "VROSC/IndividualHintNoteBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__NoteBoard_impl.hpp"
#include "VROSC/zzzz__IndividualHintNoteBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__TouchableObject_def.hpp"
//  Writing Method size for method: ::VROSC::IndividualHintNoteBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IndividualHintNoteBehaviour::*)(::VROSC::TouchableObject*)>(&::VROSC::IndividualHintNoteBehaviour::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TouchableObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IndividualHintNoteBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IndividualHintNoteBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::IndividualHintNoteBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1767e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IndividualHintNoteBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IndividualHintNoteBehaviour::*)()>(&::VROSC::IndividualHintNoteBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::TouchableObject>& VROSC::IndividualHintNoteBehaviour::__cordl_internal_get__touchable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchable;
}
constexpr ::UnityW<::VROSC::TouchableObject> const& VROSC::IndividualHintNoteBehaviour::__cordl_internal_get__touchable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchable;
}
constexpr void VROSC::IndividualHintNoteBehaviour::__cordl_internal_set__touchable(::UnityW<::VROSC::TouchableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____touchable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteBoard_PlayAxis& VROSC::IndividualHintNoteBehaviour::__cordl_internal_get_Axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr ::VROSC::NoteBoard_PlayAxis const& VROSC::IndividualHintNoteBehaviour::__cordl_internal_get_Axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr void VROSC::IndividualHintNoteBehaviour::__cordl_internal_set_Axis(::VROSC::NoteBoard_PlayAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis = value;
}
constexpr float_t& VROSC::IndividualHintNoteBehaviour::__cordl_internal_get_Pressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pressed;
}
constexpr float_t const& VROSC::IndividualHintNoteBehaviour::__cordl_internal_get_Pressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pressed;
}
constexpr void VROSC::IndividualHintNoteBehaviour::__cordl_internal_set_Pressed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pressed = value;
}
inline void VROSC::IndividualHintNoteBehaviour::Setup(::VROSC::TouchableObject*  touchable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TouchableObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, touchable);
}
inline void VROSC::IndividualHintNoteBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::IndividualHintNoteBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IndividualHintNoteBehaviour* VROSC::IndividualHintNoteBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IndividualHintNoteBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::IndividualHintNoteBehaviour::IndividualHintNoteBehaviour()   {
}

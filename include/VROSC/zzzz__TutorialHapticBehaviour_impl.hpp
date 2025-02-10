#pragma once
// IWYU pragma private; include "VROSC/TutorialHapticBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__TutorialHapticBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialHapticBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialHapticBehaviour::*)(::VROSC::HandType, float_t, float_t)>(&::VROSC::TutorialHapticBehaviour::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x176f71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialHapticBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialHapticBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::TutorialHapticBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x176f740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialHapticBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialHapticBehaviour::*)()>(&::VROSC::TutorialHapticBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x176f850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::TutorialHapticBehaviour::__cordl_internal_get__frequencyScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequencyScale;
}
constexpr float_t const& VROSC::TutorialHapticBehaviour::__cordl_internal_get__frequencyScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequencyScale;
}
constexpr void VROSC::TutorialHapticBehaviour::__cordl_internal_set__frequencyScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequencyScale = value;
}
constexpr float_t& VROSC::TutorialHapticBehaviour::__cordl_internal_get__amplitudeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeScale;
}
constexpr float_t const& VROSC::TutorialHapticBehaviour::__cordl_internal_get__amplitudeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeScale;
}
constexpr void VROSC::TutorialHapticBehaviour::__cordl_internal_set__amplitudeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitudeScale = value;
}
constexpr ::VROSC::HandType& VROSC::TutorialHapticBehaviour::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::VROSC::HandType const& VROSC::TutorialHapticBehaviour::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void VROSC::TutorialHapticBehaviour::__cordl_internal_set__hand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr float_t& VROSC::TutorialHapticBehaviour::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr float_t const& VROSC::TutorialHapticBehaviour::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void VROSC::TutorialHapticBehaviour::__cordl_internal_set__frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
constexpr float_t& VROSC::TutorialHapticBehaviour::__cordl_internal_get__amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr float_t const& VROSC::TutorialHapticBehaviour::__cordl_internal_get__amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr void VROSC::TutorialHapticBehaviour::__cordl_internal_set__amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitude = value;
}
inline void VROSC::TutorialHapticBehaviour::Setup(::VROSC::HandType  hand, float_t  frequency, float_t  amplitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hand, frequency, amplitude);
}
inline void VROSC::TutorialHapticBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::TutorialHapticBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialHapticBehaviour* VROSC::TutorialHapticBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialHapticBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialHapticBehaviour::TutorialHapticBehaviour()   {
}

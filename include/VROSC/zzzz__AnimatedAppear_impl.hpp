#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppear.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__AnimatedAppearData_def.hpp"
#include "VROSC/zzzz__AnimatedAppearSettings_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
#include "VROSC/zzzz__TimelinePlaybackHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AnimatedAppear_Mode::AnimatedAppear_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppear_Mode::AnimatedAppear_Mode()   {
}
constexpr ::VROSC::AnimatedAppear_Mode  VROSC::AnimatedAppear_Mode::LeftToRight{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AnimatedAppear_Mode  VROSC::AnimatedAppear_Mode::UpToDown{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AnimatedAppear_Mode  VROSC::AnimatedAppear_Mode::CenteredHorizontal{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::AnimatedAppear.get_Enter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AnimatedAppearSettings* (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::get_Enter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a7f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "get_Enter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.get_Exit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AnimatedAppearSettings* (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::get_Exit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a7f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "get_Exit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.get_IsAnimating
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::get_IsAnimating)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17a7f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "get_IsAnimating",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x17a7fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::Setup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x17a80a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.FixLayoutGroups
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::FixLayoutGroups)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x17a83c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "FixLayoutGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.UpdateAppearAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)(float_t, ::VROSC::AnimatedAppear_Mode, bool, bool)>(&::VROSC::AnimatedAppear::UpdateAppearAmount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17a84f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "UpdateAppearAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)(bool)>(&::VROSC::AnimatedAppear::Play)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17a8664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17a882c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::Stop)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17a8898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.AnimationHasFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::AnimationHasFinished)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17a8978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "AnimationHasFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a89c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17a89d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.SetAppearActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)(bool)>(&::VROSC::AnimatedAppear::SetAppearActive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17a89f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "SetAppearActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::Clear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17a89e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.GetMovementData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::VROSC::AnimatedAppear::*)(bool)>(&::VROSC::AnimatedAppear::GetMovementData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x17a8a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "GetMovementData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x17a8bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.EditorUnloadDirector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::EditorUnloadDirector)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17a8c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "EditorUnloadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear.EditorLoadDirector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)(bool)>(&::VROSC::AnimatedAppear::EditorLoadDirector)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17a8e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "EditorLoadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppear._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppear::*)()>(&::VROSC::AnimatedAppear::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17a8ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::AnimatedAppear::__cordl_internal_get__move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____move;
}
constexpr float_t const& VROSC::AnimatedAppear::__cordl_internal_get__move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____move;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__move(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____move = value;
}
constexpr ::VROSC::AnimatedAppearSettings*& VROSC::AnimatedAppear::__cordl_internal_get__enter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enter;
}
constexpr ::VROSC::AnimatedAppearSettings* const& VROSC::AnimatedAppear::__cordl_internal_get__enter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enter;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__enter(::VROSC::AnimatedAppearSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AnimatedAppearSettings*& VROSC::AnimatedAppear::__cordl_internal_get__exit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exit;
}
constexpr ::VROSC::AnimatedAppearSettings* const& VROSC::AnimatedAppear::__cordl_internal_get__exit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exit;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__exit(::VROSC::AnimatedAppearSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::AnimatedAppear::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::AnimatedAppear::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AnimatedAppear::__cordl_internal_get__forceLayoutUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceLayoutUpdate;
}
constexpr bool const& VROSC::AnimatedAppear::__cordl_internal_get__forceLayoutUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceLayoutUpdate;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__forceLayoutUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceLayoutUpdate = value;
}
constexpr ::VROSC::TimelinePlaybackHelper*& VROSC::AnimatedAppear::__cordl_internal_get__playbackHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackHelper;
}
constexpr ::VROSC::TimelinePlaybackHelper* const& VROSC::AnimatedAppear::__cordl_internal_get__playbackHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackHelper;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__playbackHelper(::VROSC::TimelinePlaybackHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playbackHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AnimatedAppearData*& VROSC::AnimatedAppear::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::VROSC::AnimatedAppearData* const& VROSC::AnimatedAppear::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__data(::VROSC::AnimatedAppearData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::AnimatedAppear::__cordl_internal_get__startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::AnimatedAppear::__cordl_internal_get__startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition = value;
}
constexpr bool& VROSC::AnimatedAppear::__cordl_internal_get__startPositionSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPositionSet;
}
constexpr bool const& VROSC::AnimatedAppear::__cordl_internal_get__startPositionSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPositionSet;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__startPositionSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPositionSet = value;
}
constexpr bool& VROSC::AnimatedAppear::__cordl_internal_get__startAnimationPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startAnimationPlaying;
}
constexpr bool const& VROSC::AnimatedAppear::__cordl_internal_get__startAnimationPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startAnimationPlaying;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__startAnimationPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startAnimationPlaying = value;
}
constexpr bool& VROSC::AnimatedAppear::__cordl_internal_get__setupDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr bool const& VROSC::AnimatedAppear::__cordl_internal_get__setupDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr void VROSC::AnimatedAppear::__cordl_internal_set__setupDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupDone = value;
}
inline ::VROSC::AnimatedAppearSettings* VROSC::AnimatedAppear::get_Enter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "get_Enter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AnimatedAppearSettings*, false>(this, ___internal_method);
}
inline ::VROSC::AnimatedAppearSettings* VROSC::AnimatedAppear::get_Exit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "get_Exit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AnimatedAppearSettings*, false>(this, ___internal_method);
}
inline bool VROSC::AnimatedAppear::get_IsAnimating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "get_IsAnimating",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::FixLayoutGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "FixLayoutGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::UpdateAppearAmount(float_t  amount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash, bool  force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "UpdateAppearAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount, mode, useFlash, force);
}
inline void VROSC::AnimatedAppear::Play(bool  playEnterAnimation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playEnterAnimation);
}
inline void VROSC::AnimatedAppear::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::AnimationHasFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "AnimationHasFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::SetAppearActive(bool  appearing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "SetAppearActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appearing);
}
inline void VROSC::AnimatedAppear::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> VROSC::AnimatedAppear::GetMovementData(bool  enter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "GetMovementData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>, false>(this, ___internal_method, enter);
}
inline void VROSC::AnimatedAppear::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::EditorUnloadDirector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "EditorUnloadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppear::EditorLoadDirector(bool  enter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        "EditorLoadDirector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enter);
}
inline void VROSC::AnimatedAppear::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AnimatedAppear* VROSC::AnimatedAppear::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppear*>());
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppear::AnimatedAppear()   {
}

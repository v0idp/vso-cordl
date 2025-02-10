#pragma once
// IWYU pragma private; include "VROSC/GridNoteboardCreationBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__GridNoteboardCreationBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__GridNoteboard_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)(::VROSC::GridNoteboard*, ::UnityEngine::Transform*, ::UnityEngine::AnimationCurve*)>(&::VROSC::GridNoteboardCreationBehaviour::Setup)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1768c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GridNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::GridNoteboardCreationBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1768e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour.X
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)(::System::Object*, int32_t, int32_t, int32_t)>(&::VROSC::GridNoteboardCreationBehaviour::X)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1769164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "X",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour.Z
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)(::System::Object*, int32_t, int32_t, int32_t)>(&::VROSC::GridNoteboardCreationBehaviour::Z)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1768fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "Z",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour.SetNoteValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)(::VROSC::NoteBoardNote*, float_t, int32_t, float_t)>(&::VROSC::GridNoteboardCreationBehaviour::SetNoteValues)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x1769310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "SetNoteValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour.OnPlayableDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)()>(&::VROSC::GridNoteboardCreationBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x17698b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "OnPlayableDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationBehaviour::*)()>(&::VROSC::GridNoteboardCreationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1769984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::GridNoteboard>& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__gridNoteboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gridNoteboard;
}
constexpr ::UnityW<::VROSC::GridNoteboard> const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__gridNoteboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gridNoteboard;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set__gridNoteboard(::UnityW<::VROSC::GridNoteboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gridNoteboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__fromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__fromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set__fromPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fromPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionOffset;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionOffset;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set__positionOffset(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get__rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set__rotationOffset(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_StartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartPoint;
}
constexpr float_t const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_StartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartPoint;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set_StartPoint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartPoint = value;
}
constexpr float_t& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_EndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EndPoint;
}
constexpr float_t const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_EndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EndPoint;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set_EndPoint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EndPoint = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_Clustr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clustr;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_Clustr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clustr;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set_Clustr(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Clustr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_zPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zPos;
}
constexpr bool const& VROSC::GridNoteboardCreationBehaviour::__cordl_internal_get_zPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zPos;
}
constexpr void VROSC::GridNoteboardCreationBehaviour::__cordl_internal_set_zPos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zPos = value;
}
inline void VROSC::GridNoteboardCreationBehaviour::Setup(::VROSC::GridNoteboard*  gridNoteboard, ::UnityEngine::Transform*  fromPoint, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GridNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gridNoteboard, fromPoint, curve);
}
inline void VROSC::GridNoteboardCreationBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::GridNoteboardCreationBehaviour::X(::System::Object*  notes, int32_t  xLength, int32_t  yLength, int32_t  zLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "X",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notes, xLength, yLength, zLength);
}
inline void VROSC::GridNoteboardCreationBehaviour::Z(::System::Object*  notes, int32_t  xLength, int32_t  yLength, int32_t  zLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "Z",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notes, xLength, yLength, zLength);
}
inline void VROSC::GridNoteboardCreationBehaviour::SetNoteValues(::VROSC::NoteBoardNote*  note, float_t  activationTime, int32_t  index, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "SetNoteValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, activationTime, index, x);
}
inline void VROSC::GridNoteboardCreationBehaviour::OnPlayableDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        "OnPlayableDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GridNoteboardCreationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GridNoteboardCreationBehaviour* VROSC::GridNoteboardCreationBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GridNoteboardCreationBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::GridNoteboardCreationBehaviour::GridNoteboardCreationBehaviour()   {
}

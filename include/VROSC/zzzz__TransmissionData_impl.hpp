#pragma once
// IWYU pragma private; include "VROSC/TransmissionData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__TransmissionData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__NetNoteboard_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
#include "VROSC/zzzz__NotefieldColorSettings_def.hpp"
//  Writing Method size for method: ::VROSC::TransmissionData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransmissionData::*)(::VROSC::NoteBoardNote*, ::UnityEngine::Vector3)>(&::VROSC::TransmissionData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17b7200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransmissionData::*)(::VROSC::NoteBoardNote*, ::UnityEngine::Vector3, float_t, float_t)>(&::VROSC::TransmissionData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17b7224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.Transmit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransmissionData::*)(::UnityEngine::Vector3, ::VROSC::NotefieldColorSettings_SpreadType)>(&::VROSC::TransmissionData::Transmit)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x17b7238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "Transmit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings_SpreadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.TransmitHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransmissionData::*)(float_t)>(&::VROSC::TransmissionData::TransmitHovering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17b73ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "TransmitHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.Draw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransmissionData::*)(::UnityEngine::Vector3)>(&::VROSC::TransmissionData::Draw)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17b7418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "Draw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.GetTransmissionData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::TransmissionData>* (*)(::VROSC::NoteBoardNoteController*, int32_t, int32_t, int32_t, ::VROSC::NotefieldColorSettings*, ::System::Object*)>(&::VROSC::TransmissionData::GetTransmissionData)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x17b2f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.GetSameData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransmissionData (*)(::VROSC::NoteBoardNote*, ::VROSC::NotefieldColorSettings*, int32_t, int32_t, float_t, ::UnityEngine::Vector3)>(&::VROSC::TransmissionData::GetSameData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x17b7498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetSameData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.GetTransmissionDataXY
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::TransmissionData>* (*)(::VROSC::NetNoteboard*, int32_t, int32_t, ::VROSC::NotefieldColorSettings*, ::System::Object*)>(&::VROSC::TransmissionData::GetTransmissionDataXY)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x17b443c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionDataXY",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NetNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.GetTransmissionDataXZ
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::TransmissionData>* (*)(::VROSC::NetNoteboard*, int32_t, int32_t, ::VROSC::NotefieldColorSettings*, ::System::Object*)>(&::VROSC::TransmissionData::GetTransmissionDataXZ)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x17b477c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionDataXZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NetNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransmissionData.GetTransmissionDataYZ
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::TransmissionData>* (*)(::VROSC::NetNoteboard*, int32_t, int32_t, ::VROSC::NotefieldColorSettings*, ::System::Object*)>(&::VROSC::TransmissionData::GetTransmissionDataYZ)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x17b4ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionDataYZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NetNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TransmissionData::_ctor(::VROSC::NoteBoardNote*  noteBoardNote, ::UnityEngine::Vector3  invertedInfluence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteBoardNote, invertedInfluence);
}
inline void VROSC::TransmissionData::_ctor(::VROSC::NoteBoardNote*  noteBoardNote, ::UnityEngine::Vector3  influence, float_t  fullInfluence, float_t  hoverInfluence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteBoardNote, influence, fullInfluence, hoverInfluence);
}
inline void VROSC::TransmissionData::Transmit(::UnityEngine::Vector3  power, ::VROSC::NotefieldColorSettings_SpreadType  spread)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "Transmit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings_SpreadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, power, spread);
}
inline void VROSC::TransmissionData::TransmitHovering(float_t  hoveringAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "TransmitHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hoveringAmount);
}
inline void VROSC::TransmissionData::Draw(::UnityEngine::Vector3  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "Draw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* VROSC::TransmissionData::GetTransmissionData(::VROSC::NoteBoardNoteController*  controller, int32_t  noteNumberX, int32_t  noteNumberY, int32_t  noteNumberZ, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  allNotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::TransmissionData>*, false>(nullptr, ___internal_method, controller, noteNumberX, noteNumberY, noteNumberZ, settings, allNotes);
}
inline ::VROSC::TransmissionData VROSC::TransmissionData::GetSameData(::VROSC::NoteBoardNote*  otherNote, ::VROSC::NotefieldColorSettings*  settings, int32_t  note, int32_t  index, float_t  step, ::UnityEngine::Vector3  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetSameData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TransmissionData, false>(nullptr, ___internal_method, otherNote, settings, note, index, step, axis);
}
inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* VROSC::TransmissionData::GetTransmissionDataXY(::VROSC::NetNoteboard*  controller, int32_t  noteNumberX, int32_t  noteNumberY, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  XYNotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionDataXY",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NetNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::TransmissionData>*, false>(nullptr, ___internal_method, controller, noteNumberX, noteNumberY, settings, XYNotes);
}
inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* VROSC::TransmissionData::GetTransmissionDataXZ(::VROSC::NetNoteboard*  controller, int32_t  noteNumberX, int32_t  noteNumberZ, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  XZNotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionDataXZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NetNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::TransmissionData>*, false>(nullptr, ___internal_method, controller, noteNumberX, noteNumberZ, settings, XZNotes);
}
inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* VROSC::TransmissionData::GetTransmissionDataYZ(::VROSC::NetNoteboard*  controller, int32_t  noteNumberY, int32_t  noteNumberZ, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  YZNotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransmissionData>::get(),
                        "GetTransmissionDataYZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NetNoteboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NotefieldColorSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::TransmissionData>*, false>(nullptr, ___internal_method, controller, noteNumberY, noteNumberZ, settings, YZNotes);
}
// Ctor Parameters [CppParam { name: "_noteBoardNote", ty: "::UnityW<::VROSC::NoteBoardNote>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_invertedInfluence", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fullInfluence", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_hoverInfluence", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TransmissionData::TransmissionData(::UnityW<::VROSC::NoteBoardNote>  _noteBoardNote, ::UnityEngine::Vector3  _invertedInfluence, float_t  _fullInfluence, float_t  _hoverInfluence) noexcept  {
this->_noteBoardNote = _noteBoardNote;
this->_invertedInfluence = _invertedInfluence;
this->_fullInfluence = _fullInfluence;
this->_hoverInfluence = _hoverInfluence;
}
// Ctor Parameters []
constexpr ::VROSC::TransmissionData::TransmissionData()   {
}

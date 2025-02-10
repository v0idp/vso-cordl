#pragma once
// IWYU pragma private; include "VROSC/OrganPipeRow.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Axis_impl.hpp"
#include "VROSC/zzzz__OrganPipeRow_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "VROSC/zzzz__NoteFieldData_def.hpp"
#include "VROSC/zzzz__NoteFieldMonitor_def.hpp"
#include "VROSC/zzzz__NoteFieldParameters_def.hpp"
#include "VROSC/zzzz__OrganPipeRow_def.hpp"
#include "VROSC/zzzz__OrganPipe_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::OrganPipeRow_Alignment::OrganPipeRow_Alignment(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::OrganPipeRow_Alignment::OrganPipeRow_Alignment()   {
}
constexpr ::VROSC::OrganPipeRow_Alignment  VROSC::OrganPipeRow_Alignment::Center{static_cast<int32_t>(0x0)};
constexpr ::VROSC::OrganPipeRow_Alignment  VROSC::OrganPipeRow_Alignment::Left{static_cast<int32_t>(0x1)};
constexpr ::VROSC::OrganPipeRow_Alignment  VROSC::OrganPipeRow_Alignment::Right{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::OrganPipeRow.get_PreviewPipes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::get_PreviewPipes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17af410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "get_PreviewPipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.set_Pipes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)(::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*)>(&::VROSC::OrganPipeRow::set_Pipes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17af418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "set_Pipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.get_Pipes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>* (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::get_Pipes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17af420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "get_Pipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17af428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::Setup)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x17af42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::Update)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x17af54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.IsPlayingPipe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::OrganPipeRow::*)(::VROSC::OrganPipe*, int32_t, int32_t)>(&::VROSC::OrganPipeRow::IsPlayingPipe)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17af784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "IsPlayingPipe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::OrganPipe*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.CreatePipes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)(int32_t)>(&::VROSC::OrganPipeRow::CreatePipes)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x17af7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "CreatePipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.UpdatePipes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)(::VROSC::NoteFieldData*, ::VROSC::NoteFieldParameters*)>(&::VROSC::OrganPipeRow::UpdatePipes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x17afd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "UpdatePipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.GetPosByAlignment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::OrganPipeRow::*)(int32_t, int32_t)>(&::VROSC::OrganPipeRow::GetPosByAlignment)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x17afba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "GetPosByAlignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.GetNoteDataByAxis
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::OrganPipeRow::*)(::VROSC::NoteFieldData*, int32_t)>(&::VROSC::OrganPipeRow::GetNoteDataByAxis)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17afea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "GetNoteDataByAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.GetAxisCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::OrganPipeRow::*)(::VROSC::NoteFieldParameters*)>(&::VROSC::OrganPipeRow::GetAxisCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17afe48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "GetAxisCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x17aff58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.SetFullyDone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::SetFullyDone)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x17b0394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "SetFullyDone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::Clear)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x17b04e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeRow._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeRow::*)()>(&::VROSC::OrganPipeRow::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17b0694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::OrganPipeRow::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::OrganPipeRow::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__controller(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SynthController>& VROSC::OrganPipeRow::__cordl_internal_get__instrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr ::UnityW<::VROSC::SynthController> const& VROSC::OrganPipeRow::__cordl_internal_get__instrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__instrument(::UnityW<::VROSC::SynthController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::OrganPipe>& VROSC::OrganPipeRow::__cordl_internal_get__pipePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pipePrefab;
}
constexpr ::UnityW<::VROSC::OrganPipe> const& VROSC::OrganPipeRow::__cordl_internal_get__pipePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pipePrefab;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__pipePrefab(::UnityW<::VROSC::OrganPipe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pipePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteFieldMonitor>& VROSC::OrganPipeRow::__cordl_internal_get__monitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitor;
}
constexpr ::UnityW<::VROSC::NoteFieldMonitor> const& VROSC::OrganPipeRow::__cordl_internal_get__monitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitor;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__monitor(::UnityW<::VROSC::NoteFieldMonitor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::OrganPipeRow::__cordl_internal_get__monitorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorIndex;
}
constexpr int32_t const& VROSC::OrganPipeRow::__cordl_internal_get__monitorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorIndex;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__monitorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monitorIndex = value;
}
constexpr ::VROSC::MinMaxFloat*& VROSC::OrganPipeRow::__cordl_internal_get__height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::OrganPipeRow::__cordl_internal_get__height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__height(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____height)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::OrganPipeRow::__cordl_internal_get__base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::OrganPipeRow::__cordl_internal_get__base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__base(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____base)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::OrganPipeRow::__cordl_internal_get__heightCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::OrganPipeRow::__cordl_internal_get__heightCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightCurve;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__heightCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heightCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::OrganPipeRow::__cordl_internal_get__baseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::OrganPipeRow::__cordl_internal_get__baseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseCurve;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__baseCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::OrganPipeRow::__cordl_internal_get__diameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diameter;
}
constexpr float_t const& VROSC::OrganPipeRow::__cordl_internal_get__diameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diameter;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__diameter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diameter = value;
}
constexpr float_t& VROSC::OrganPipeRow::__cordl_internal_get__step()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____step;
}
constexpr float_t const& VROSC::OrganPipeRow::__cordl_internal_get__step() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____step;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__step(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____step = value;
}
constexpr ::VROSC::OrganPipeRow_Alignment& VROSC::OrganPipeRow::__cordl_internal_get__alignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alignment;
}
constexpr ::VROSC::OrganPipeRow_Alignment const& VROSC::OrganPipeRow::__cordl_internal_get__alignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alignment;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__alignment(::VROSC::OrganPipeRow_Alignment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alignment = value;
}
constexpr ::VROSC::Axis& VROSC::OrganPipeRow::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::VROSC::Axis const& VROSC::OrganPipeRow::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__axis(::VROSC::Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr ::UnityEngine::Color& VROSC::OrganPipeRow::__cordl_internal_get__offColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offColor;
}
constexpr ::UnityEngine::Color const& VROSC::OrganPipeRow::__cordl_internal_get__offColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offColor;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__offColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offColor = value;
}
constexpr ::UnityEngine::Color& VROSC::OrganPipeRow::__cordl_internal_get__PlayingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayingColor;
}
constexpr ::UnityEngine::Color const& VROSC::OrganPipeRow::__cordl_internal_get__PlayingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayingColor;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__PlayingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayingColor = value;
}
constexpr int32_t& VROSC::OrganPipeRow::__cordl_internal_get__preview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preview;
}
constexpr int32_t const& VROSC::OrganPipeRow::__cordl_internal_get__preview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preview;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__preview(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preview = value;
}
constexpr int32_t& VROSC::OrganPipeRow::__cordl_internal_get__octaveAtSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaveAtSetup;
}
constexpr int32_t const& VROSC::OrganPipeRow::__cordl_internal_get__octaveAtSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaveAtSetup;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__octaveAtSetup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____octaveAtSetup = value;
}
constexpr bool& VROSC::OrganPipeRow::__cordl_internal_get__setupDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr bool const& VROSC::OrganPipeRow::__cordl_internal_get__setupDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__setupDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupDone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*& VROSC::OrganPipeRow::__cordl_internal_get__Pipes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pipes_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>* const& VROSC::OrganPipeRow::__cordl_internal_get__Pipes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pipes_k__BackingField;
}
constexpr void VROSC::OrganPipeRow::__cordl_internal_set__Pipes_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Pipes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::OrganPipeRow::get_PreviewPipes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "get_PreviewPipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::set_Pipes(::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "set_Pipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>* VROSC::OrganPipeRow::get_Pipes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "get_Pipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::OrganPipeRow::IsPlayingPipe(::VROSC::OrganPipe*  pipe, int32_t  leftNote, int32_t  rightNote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "IsPlayingPipe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::OrganPipe*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pipe, leftNote, rightNote);
}
inline void VROSC::OrganPipeRow::CreatePipes(int32_t  pipeCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "CreatePipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pipeCount);
}
inline void VROSC::OrganPipeRow::UpdatePipes(::VROSC::NoteFieldData*  data, ::VROSC::NoteFieldParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "UpdatePipes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, parameters);
}
inline ::UnityEngine::Vector3 VROSC::OrganPipeRow::GetPosByAlignment(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "GetPosByAlignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, index, count);
}
inline int32_t VROSC::OrganPipeRow::GetNoteDataByAxis(::VROSC::NoteFieldData*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "GetNoteDataByAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, index);
}
inline int32_t VROSC::OrganPipeRow::GetAxisCount(::VROSC::NoteFieldParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "GetAxisCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, parameters);
}
inline void VROSC::OrganPipeRow::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::SetFullyDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "SetFullyDone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeRow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OrganPipeRow* VROSC::OrganPipeRow::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OrganPipeRow*>());
}
// Ctor Parameters []
constexpr ::VROSC::OrganPipeRow::OrganPipeRow()   {
}

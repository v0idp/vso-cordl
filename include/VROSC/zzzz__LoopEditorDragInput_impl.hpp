#pragma once
// IWYU pragma private; include "VROSC/LoopEditorDragInput.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__InputArea_impl.hpp"
#include "VROSC/zzzz__LoopEditorDragInput_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
//  Writing Method size for method: ::VROSC::LoopEditorDragInput.SetIsInteracting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopEditorDragInput::*)(::VROSC::ClickData*, bool)>(&::VROSC::LoopEditorDragInput::SetIsInteracting)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x189236c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopEditorDragInput.UpdateInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopEditorDragInput::*)()>(&::VROSC::LoopEditorDragInput::UpdateInput)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x18923dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopEditorDragInput._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopEditorDragInput::*)()>(&::VROSC::LoopEditorDragInput::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1892454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::LoopEditorDragInput::__cordl_internal_get__sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr float_t const& VROSC::LoopEditorDragInput::__cordl_internal_get__sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr void VROSC::LoopEditorDragInput::__cordl_internal_set__sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivity = value;
}
constexpr ::UnityEngine::Vector3& VROSC::LoopEditorDragInput::__cordl_internal_get__grabStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabStart;
}
constexpr ::UnityEngine::Vector3 const& VROSC::LoopEditorDragInput::__cordl_internal_get__grabStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabStart;
}
constexpr void VROSC::LoopEditorDragInput::__cordl_internal_set__grabStart(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabStart = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& VROSC::LoopEditorDragInput::__cordl_internal_get_OnDragUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDragUpdated;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& VROSC::LoopEditorDragInput::__cordl_internal_get_OnDragUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDragUpdated;
}
constexpr void VROSC::LoopEditorDragInput::__cordl_internal_set_OnDragUpdated(::System::Action_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDragUpdated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopEditorDragInput::__cordl_internal_get_OnDragBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDragBegin;
}
constexpr ::System::Action* const& VROSC::LoopEditorDragInput::__cordl_internal_get_OnDragBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDragBegin;
}
constexpr void VROSC::LoopEditorDragInput::__cordl_internal_set_OnDragBegin(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDragBegin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopEditorDragInput::__cordl_internal_get_OnDragEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDragEnd;
}
constexpr ::System::Action* const& VROSC::LoopEditorDragInput::__cordl_internal_get_OnDragEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDragEnd;
}
constexpr void VROSC::LoopEditorDragInput::__cordl_internal_set_OnDragEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDragEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopEditorDragInput::SetIsInteracting(::VROSC::ClickData*  clickData, bool  isInteracting)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData, isInteracting);
}
inline void VROSC::LoopEditorDragInput::UpdateInput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopEditorDragInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopEditorDragInput*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopEditorDragInput* VROSC::LoopEditorDragInput::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopEditorDragInput*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopEditorDragInput::LoopEditorDragInput()   {
}

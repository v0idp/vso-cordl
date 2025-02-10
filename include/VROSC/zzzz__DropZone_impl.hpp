#pragma once
// IWYU pragma private; include "VROSC/DropZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__DropZone_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__Droppable_def.hpp"
//  Writing Method size for method: ::VROSC::DropZone.Drop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DropZone::*)(::VROSC::Droppable*)>(&::VROSC::DropZone::Drop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x173b020;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DropZone*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DropZone*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DropZone._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DropZone::*)()>(&::VROSC::DropZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DropZone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::VROSC::Droppable>>*& VROSC::DropZone::__cordl_internal_get_OnDroppedInto()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDroppedInto;
}
constexpr ::System::Action_1<::UnityW<::VROSC::Droppable>>* const& VROSC::DropZone::__cordl_internal_get_OnDroppedInto() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDroppedInto;
}
constexpr void VROSC::DropZone::__cordl_internal_set_OnDroppedInto(::System::Action_1<::UnityW<::VROSC::Droppable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDroppedInto)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DropZone::Drop(::VROSC::Droppable*  droppable)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DropZone*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, droppable);
}
inline void VROSC::DropZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DropZone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DropZone* VROSC::DropZone::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DropZone*>());
}
// Ctor Parameters []
constexpr ::VROSC::DropZone::DropZone()   {
}

#pragma once
// IWYU pragma private; include "VROSC/ILoopGroupListItem.hpp"
#include "VROSC/zzzz__ILoopGroupListItem_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::VROSC::ILoopGroupListItem.get_PositionInGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::ILoopGroupListItem::*)()>(&::VROSC::ILoopGroupListItem::get_PositionInGroup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ILoopGroupListItem.get_RectTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::VROSC::ILoopGroupListItem::*)()>(&::VROSC::ILoopGroupListItem::get_RectTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ILoopGroupListItem.SetPositionInGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ILoopGroupListItem::*)(int32_t)>(&::VROSC::ILoopGroupListItem::SetPositionInGroup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline int32_t VROSC::ILoopGroupListItem::get_PositionInGroup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> VROSC::ILoopGroupListItem::get_RectTransform()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline void VROSC::ILoopGroupListItem::SetPositionInGroup(int32_t  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ILoopGroupListItem*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}

#pragma once
// IWYU pragma private; include "VROSC/IAnchoredObject.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
//  Writing Method size for method: ::VROSC::IAnchoredObject.get_TransformMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TransformMover> (::VROSC::IAnchoredObject::*)()>(&::VROSC::IAnchoredObject::get_TransformMover)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IAnchoredObject.AddSpatialAnchorToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IAnchoredObject::*)(::StringW)>(&::VROSC::IAnchoredObject::AddSpatialAnchorToData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IAnchoredObject.RemoveSpatialAnchorFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IAnchoredObject::*)(::StringW)>(&::VROSC::IAnchoredObject::RemoveSpatialAnchorFromData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline ::UnityW<::VROSC::TransformMover> VROSC::IAnchoredObject::get_TransformMover()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TransformMover>, false>(this, ___internal_method);
}
inline void VROSC::IAnchoredObject::AddSpatialAnchorToData(::StringW  anchorUuid)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::IAnchoredObject::RemoveSpatialAnchorFromData(::StringW  anchorUuid)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IAnchoredObject*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}

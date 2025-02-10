#pragma once
// IWYU pragma private; include "VROSC/BaseDataModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__ChangeFlags_impl.hpp"
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::VROSC::BaseDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::BaseDataModel::*)()>(&::VROSC::BaseDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x183cd4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BaseDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BaseDataModel::*)()>(&::VROSC::BaseDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183cd8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BaseDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BaseDataModel::*)()>(&::VROSC::BaseDataModel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x183cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BaseDataModel.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::BaseDataModel::*)()>(&::VROSC::BaseDataModel::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x183cda4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BaseDataModel.GetFirestoreData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::VROSC::BaseDataModel::*)()>(&::VROSC::BaseDataModel::GetFirestoreData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x183cdcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr ::VROSC::ChangeFlags& VROSC::BaseDataModel::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::VROSC::ChangeFlags const& VROSC::BaseDataModel::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void VROSC::BaseDataModel::__cordl_internal_set_Flags(::VROSC::ChangeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
constexpr int32_t& VROSC::BaseDataModel::__cordl_internal_get_SaveVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SaveVersion;
}
constexpr int32_t const& VROSC::BaseDataModel::__cordl_internal_get_SaveVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SaveVersion;
}
constexpr void VROSC::BaseDataModel::__cordl_internal_set_SaveVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SaveVersion = value;
}
inline ::StringW VROSC::BaseDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::BaseDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BaseDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VROSC::BaseDataModel::Serialize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* VROSC::BaseDataModel::GetFirestoreData()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BaseDataModel*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, false>(this, ___internal_method);
}
inline ::VROSC::BaseDataModel* VROSC::BaseDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BaseDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::BaseDataModel::BaseDataModel()   {
}

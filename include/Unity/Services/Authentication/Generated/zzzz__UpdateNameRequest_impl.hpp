#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/UpdateNameRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/Generated/zzzz__UpdateNameRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::Generated::UpdateNameRequest.get_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::Generated::UpdateNameRequest::*)()>(&::Unity::Services::Authentication::Generated::UpdateNameRequest::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9a694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::UpdateNameRequest*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::Generated::UpdateNameRequest.set_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::Generated::UpdateNameRequest::*)(::StringW)>(&::Unity::Services::Authentication::Generated::UpdateNameRequest::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9a69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::UpdateNameRequest*>::get(),
                        "set_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::Generated::UpdateNameRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::Generated::UpdateNameRequest::*)(::StringW)>(&::Unity::Services::Authentication::Generated::UpdateNameRequest::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e9a6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::UpdateNameRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::Generated::UpdateNameRequest::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Authentication::Generated::UpdateNameRequest::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Unity::Services::Authentication::Generated::UpdateNameRequest::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Services::Authentication::Generated::UpdateNameRequest::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::UpdateNameRequest*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::Generated::UpdateNameRequest::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::UpdateNameRequest*>::get(),
                        "set_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::Generated::UpdateNameRequest::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::UpdateNameRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::Unity::Services::Authentication::Generated::UpdateNameRequest* Unity::Services::Authentication::Generated::UpdateNameRequest::New_ctor(::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::Generated::UpdateNameRequest*>(name));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::Generated::UpdateNameRequest::UpdateNameRequest()   {
}

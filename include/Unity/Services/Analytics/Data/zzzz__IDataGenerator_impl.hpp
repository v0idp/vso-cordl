#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Data/IDataGenerator.hpp"
#include "Unity/Services/Analytics/Data/zzzz__IDataGenerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__DataGenerator_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__StdCommonParams_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBuffer_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Data::IDataGenerator.SetBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::IDataGenerator::*)(::Unity::Services::Analytics::Internal::IBuffer*)>(&::Unity::Services::Analytics::Data::IDataGenerator::SetBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Data::IDataGenerator.GameRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::IDataGenerator::*)(::System::DateTime, ::Unity::Services::Analytics::Data::StdCommonParams*, ::StringW)>(&::Unity::Services::Analytics::Data::IDataGenerator::GameRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Data::IDataGenerator.GameEnded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::IDataGenerator::*)(::System::DateTime, ::Unity::Services::Analytics::Data::StdCommonParams*, ::StringW, ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState)>(&::Unity::Services::Analytics::Data::IDataGenerator::GameEnded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline void Unity::Services::Analytics::Data::IDataGenerator::SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void Unity::Services::Analytics::Data::IDataGenerator::GameRunning(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datetime, commonParams, callingMethodIdentifier);
}
inline void Unity::Services::Analytics::Data::IDataGenerator::GameEnded(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier, ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  quitState)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::IDataGenerator*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datetime, commonParams, callingMethodIdentifier, quitState);
}
